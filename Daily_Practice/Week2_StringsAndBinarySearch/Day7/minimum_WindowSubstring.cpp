class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.length();
        int n = t.length();
        unordered_map<int,int> mp;
        for(auto i: t)mp[i]++;
        int start = 0;
        int end = 0;
        int ans = INT_MAX;
        int counter = n;
        int stringStart = 0;
        while(end<m){
            if(mp[s[end]]>0){
                counter-- ;
            }
            mp[s[end]]--;
            end ++;
            while(counter==0){
                if(end-start<ans){
                    ans = end - start;
                    stringStart = start;
                }
                mp[s[start]]++;
                if(mp[s[start]]>0)counter++;
                start++;
            }
        }
        return (ans==INT_MAX)?"":s.substr(stringStart,ans);
    }
};