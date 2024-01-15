class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        int result = 0;
        for(int i = 0;i<n;i++){
            unordered_map<double,int> mp;
            int samePoint = 1;
            for(int j = i+1;j<n;j++){
                if(points[i][0]==points[j][0] && points[i][1]==points[j][1]){
                    samePoint++;
                }
                else if(points[i][0]==points[j][0]){
                    mp[INT_MAX]++;
                }
                else{
                    double slope = double(points[i][1]-points[j][1])/double(points[i][0]-points[j][0]);
                    mp[slope]++;
                }
            }
            int localmax = 0;
            for(auto itr:mp){
                if(itr.second>localmax)localmax = itr.second;
            }
            localmax+=samePoint;
            result = max(result,localmax);
        }
        return result;
    }
};
