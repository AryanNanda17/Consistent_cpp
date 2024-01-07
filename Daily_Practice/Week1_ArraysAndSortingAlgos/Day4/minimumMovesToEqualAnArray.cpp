class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int weight = 1;
        long long ans = 0;
        for(int i = n-1;i>0;i--){
            ans += (nums[i]-nums[i-1])*weight;
            weight++;
        }
        return ans;
    }
};