#include<bits/stdc++.h>
class Solution {
public:
    static bool cmp(string a, string b){
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> output;
        for(auto &i : nums)output.push_back(to_string(i));
        sort(output.begin(),output.end(),cmp);
        string result;
        for(auto &i : output){
            result+=i;
        }
        return (result[0]=='0')?"0": result;
    }
};