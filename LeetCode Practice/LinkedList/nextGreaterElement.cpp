class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n);
        stack<int> s;
        for(int i = 2*n-1;i>=0;i--){
            while(!s.empty() && nums[i%n]>=s.top()){
                s.pop();
            }
            if(i<n){
                if(!s.empty())nge[i]=s.top();
                else{
                    nge[i]=-1;
                }
            }   
            s.push(nums[i%n]);     
        }
        return nge;
    }
};