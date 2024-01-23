#define MOD 1000000007

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n,0),right(n,0);
        stack<pair<int,int>> s1,s2;
        for(int i = 0;i<n;i++){
            int count = 1;
            while(!s1.empty() && arr[i]<s1.top().first){
                count += s1.top().second;
                s1.pop();
            }
            s1.push({arr[i],count});
            left[i]=count;
        }
        for(int i = n-1;i>=0;i--){
            int count = 1;
            while(!s2.empty() && arr[i]<=s2.top().first){
                count += s2.top().second;
                s2.pop();
            }
            s2.push({arr[i],count});
            right[i]=count;
        }
        long long ans = 0;
        for(int i =0;i<n;i++){
            ans+= (long long)(arr[i]*((long long)(left[i]*right[i])));
        }   
        return ans%MOD;
    }
};