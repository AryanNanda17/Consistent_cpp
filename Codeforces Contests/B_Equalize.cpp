#include <iostream>
// #include <bits/stdc++.h>
#include <numeric>
#include<map>
#include<algorithm>
#define ll long long
#define mod 1000000007
using namespace std;
void precal(){
}
ll maxFreq(vector<ll>& v, ll l, ll r, ll x){
    ll ans = -1;
    while(l<=r){
        ll m = l+(r-l)/2;
        if(v[m]==x)return m;
        if(v[m]<x){
            ans = m;
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    return ans;
}
void solve(){
    int n;
    cin>>n;
    vector<ll>v;
    unordered_map<ll,ll> mp;

    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(mp.find(x)==mp.end()){
            v.push_back(x);
        }
        mp[x]++;
    }
    sort(v.begin(),v.end());
    ll m=v.size();
    ll ans = 1;
    ll k = maxFreq(v,0,m-1,v[0]+n-1);
    k++;
    if(k>ans)ans=k;
    for(ll i = 0;i<m && k<m;i++){
        while(k<m && v[k]<=v[i]+n-1){
            k++;
        }
        if(k-i>ans)ans = k-i;
    }
    cout<<ans<<endl;
    
}   
 
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            // cout<<setprecision(10);
            precal();
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
                solve();
    }
    return 0;
}