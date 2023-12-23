#include<bits/stdc++.h>
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count =0;
        long sum=0;
        long cur= 0;
        sum = 1L * (nums[0]+nums[1]);
        count = 2;
        for(int i =2;i<nums.size();i++){
            if(1L * nums[i]<sum){
                sum+= (1L * nums[i]);
                cur = sum;
                count++;
            }
            else{
                sum+= (1L * nums[i]);
            }
        }
        if(count==2){
            return -1;    
        }
        else{
            return cur;
        }
    }
};