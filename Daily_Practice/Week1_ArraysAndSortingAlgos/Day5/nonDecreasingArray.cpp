class Solution{
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int fl = 1;
        for(int i = 1;i<n;i++){
            if(nums[i-1]>nums[i]){
                count++;
                if(count==2)return false;
                if(i<2 || nums[i-2]<=nums[i]){
                    nums[i-1] = nums[i];
                }
                else{
                    nums[i]=nums[i-1];
                }
            }
        }
        return true;
    }
};