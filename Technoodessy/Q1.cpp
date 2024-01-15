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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    if (k>0){
        ll max=*max_element(v.begin(),v.end());
        for(int i=0;i<n;i++){
            v[i]=max-v[i];
        }
        max=*max_element(v.begin(),v.end());
        k--;
        if(k%2!=0 && k>0){
          for(int i=0;i<n;i++){
            v[i]=max-v[i];
          }
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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