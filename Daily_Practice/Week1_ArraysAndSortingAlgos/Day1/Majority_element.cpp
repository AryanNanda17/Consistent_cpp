// Intuition is counting the number of elements presents in the array and then, returning the element with 
// with largest count. 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i : nums)mp[i]++;
        int a = 0;
        int max = INT_MIN;
        for(auto itr : mp){
            if(itr.second>max){
                max=itr.second;
                a = itr.first;
            }
        }
        return a;
    }
};