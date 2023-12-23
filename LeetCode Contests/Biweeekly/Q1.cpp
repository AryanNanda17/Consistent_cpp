#include<bits/stdc++.h>
class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int count =0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            for(int j =i;j<n;j++){
                vector<int> copy(n-(j-i+1));
                int index = 0;
                for(int k = 0;k<n;k++){
                    if(k<i || k>j){
                        copy[index++]=nums[k];
                    }
                }
                if(strictlyincreasing(copy))count++;
            }
            
        }
        return count;
    }
    bool strictlyincreasing(vector<int>arr){
        for(int i=1;i<arr.size();i++){
            if(arr[i]<=arr[i-1]){
            return false;
            }
        }
        return true;
    
    }
};