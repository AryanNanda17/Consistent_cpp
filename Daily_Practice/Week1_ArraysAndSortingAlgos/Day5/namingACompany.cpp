class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_set<string> mp[26];
        long long res = 0;
        for(auto &i:ideas){
            mp[i[0]-'a'].insert(i.substr(1));
        }
        for(int i =0;i<25;i++){
            for(int j = i+1;j<26;j++){
                int ans1=0;
                int ans2 = 0;
                for(auto &s : mp[i]){
                    if(mp[j].find(s)==mp[j].end())ans1++;
                }
                for(auto &s : mp[j]){
                    if(mp[i].find(s)==mp[j].end())ans2++;
                }
                res+= (ans1*ans2);
            }
        }
        return res*2;
    }
};