#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& v) {
        int n = v.size();
        sort(v.begin(),v.end());
        int min = INT_MAX;
        for(int i=1;i<n;i++){
            int a = v[i]-v[i-1];
            if(a<min)min=a;
        }
        vector<vector<int>> output;
        for(int i=1;i<n;i++){
            if((v[i]-v[i-1])==min){
                vector<int> ans;
                ans.push_back(v[i-1]);
                ans.push_back(v[i]);
                output.push_back(ans);
            }
        }
        return output;
    }
};