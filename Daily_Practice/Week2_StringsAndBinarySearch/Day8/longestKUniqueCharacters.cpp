class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int m = s.length();
        int start = 0, end = 0, maxi = INT_MIN, counter = k, beststart=0;
        unordered_map<char, int> mp;
        for(auto &i :s)mp[i]=1;
        while(end<m){
            if(mp[s[end]]==1)counter--;
            mp[s[end]]--;
            end++;
            if(counter==0 && (mp[s[end]]==1 || end==m)){
                while(counter==0){
                    if(end-start>maxi){
                        maxi = end-start;
                        beststart = start;
                    }
                    mp[s[start]]++;
                    if(mp[s[start]]==1)counter++;
                    start++;
                }
            }
        }
        return (maxi==INT_MIN)?-1:maxi;
    }
};