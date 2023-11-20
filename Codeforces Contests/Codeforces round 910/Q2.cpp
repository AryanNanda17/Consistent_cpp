#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include<map>
#include<algorithm>
#define ll long long
#define mod 1000000007
using namespace std;
void precal(){
}
 
void solve(){
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll next = INT_MAX;
    ll ans = 0;
    for(int i = n-1 ;i>=0;i--){
        if(v[i]<=next){
            next = v[i];
        }
        else{
            ll x = (v[i]+next-1)/next;
            ans+= (x-1);
            next = v[i]/x;
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