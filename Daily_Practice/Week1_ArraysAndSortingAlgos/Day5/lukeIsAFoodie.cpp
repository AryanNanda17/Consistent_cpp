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
 
void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll ans = 0;
    ll l,r;
    l = -1;
    r = 1e9+5;
    for(int i = 0;i<n;i++){
        if(v[i]+x<l || v[i]-x>r){
            ans++;
            l = v[i]-x;
            r = v[i]+x;
        }
        else{
            l = max(l, v[i]-x);
            r = min(r,v[i]+x);
        }
    }
    cout<<ans<<endl;
}   
 
int main(){
    // #ifndef ONLINE_JUDGE
    //         freopen("input.txt","r",stdin);
    //         freopen("output.txt","w",stdout);
    // #endif
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