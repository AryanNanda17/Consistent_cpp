class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int target=-1*nums[i];
            int si = i+1;
            int ei = nums.size()-1;
            while(si<ei){
                int sum = nums[si]+nums[ei];
                if(sum>target)ei--;
                else if(sum<target)si++;
                else{
                    vector<int> ans = {nums[i], nums[si],nums[ei]};
                    output.push_back(ans);
                    while(si<ei && nums[si]==ans[1])si++;
                    while(si<ei && nums[ei]==ans[2])ei--;
                }
            }
            while(i+1<nums.size() && nums[i+1]==nums[i])i++;
        }
        return output;
    }
};