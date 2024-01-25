#define MOD 1000000007
class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<int> v(2005,0);
        v[1]=1;
        for(int i=1;i<=n;i++){
            for(int j = i+delay;j<i+forget;j++){
                v[j] = (v[j]+v[i])%MOD;
            }
        }
        int i =0;
        long long ans= 0;
        while(forget--){
            ans = (ans+v[n-i])%MOD;
            i++;
        }
        return ans;
    }
};