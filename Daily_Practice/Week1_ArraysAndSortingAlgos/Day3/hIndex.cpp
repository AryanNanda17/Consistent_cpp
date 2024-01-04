class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n = citations.size();
        int maxi = INT_MIN;
        if(n==1){
            if(citations[0]==0)return 0;
            else return 1;
        }
        for(int i =0;i<citations.size();i++){
            int count = 0;
            count = n - i;
            if(count>=citations[i])maxi=citations[i];
            else {
                maxi = max(maxi, count);
            }
        }
        return maxi;
    }
};