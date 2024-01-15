class Solution {
public:
    static void ans(vector<int>& nums, vector<vector<int>> &output, int x, int y,int i, int j,long long c){
        int n = nums.size()-1;
        while(x<y){
            if(nums[x]+nums[y]==c){
                vector<int> temp;
                temp.push_back(nums[x]);
                temp.push_back(nums[y]);
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                output.push_back(temp);
                while(x<y && nums[x+1]==nums[x])x++;
                while(x<y && nums[y]==nums[y-1])y--;
                x++;
                y--;
            }
            else if(nums[x]+nums[y]>c)y--;
            else x++;
        }
    }
    vector<vector<int>> fourSum(vector<int>& nums, int target){
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> output;
        for(int i = 0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int a = nums[i];
            for(int j = i+1;j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;
                int b = nums[j];
                long long c = static_cast<long long>(target) - a - b;
                ans(nums, output, j+1,n-1,i,j, c);
            }
        }
        return output;
    }
};