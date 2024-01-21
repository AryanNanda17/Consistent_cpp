class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int index = -1;
        for(int i =1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                index = i-1;
                break;
            }
        }
        if(index==-1){
            int ansIndex = -1;
            int start = 0;
            int end = nums.size()-1;
            while(start<=end){
                int mid = start + (end-start)/2;
                if(nums[mid]==target){
                    ansIndex = mid;
                    break;
                }
                else if(nums[mid]<target){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
            if(ansIndex==-1)return false;
            return true;
        }
        int array1Index = lower_bound(nums.begin(),nums.begin()+index,target)-nums.begin();
        if(array1Index<nums.size() && nums[array1Index]==target){
            if(array1Index==-1)return false;
            return true;
        }
        int array2Index = lower_bound(nums.begin()+index+1,nums.end(),target)-nums.begin();
        if(array2Index<nums.size() && nums[array2Index]==target){
           if(array2Index==-1)return false;
            return true;
        }   
        return false;
    }
};