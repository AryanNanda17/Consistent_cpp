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
    ll n;
    cin>>n;
    vector<ll>v(n,1);
    ll sum =0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>v[i-1]){
            sum+= (v[i-1]-v[i]);
        }
    }
    cout<<sum<<endl;
    // if(n==1){
    //     cout<<v[0]-1<<endl;4


    //     return;
    // }
    // vector<ll> res;
    // res.push_back(1);
    // for(int i=0;i<n;i++){
    //     if(v[i]!=res[res.size()-1]) res.push_back(v[i]);
    // }
    // ll ans = 0;
    // for(int i=0;i<=res.size()-1;i++){
    //     if(res[i]<res[i+1])ans+=(res[i+1]-res[i]);
    // }
    // cout<<ans<<endl;

    // int a = *max_element(v.begin(),v.end());
    // a = a-1;
    // for(int i =0;i<n;i++){
    //     if(v[i]==0)a++;
    // }
    // cout<<a<<endl;
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
