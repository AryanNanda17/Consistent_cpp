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
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll cost = 0;
    ll i = 0;
    ll j = 1;
    if(n==1){
        cost = cost + ((j-i)*v[i] + ((j*j) - (i*i))*(v[i]*v[i]));
    }
    for(;j<n;j++){
        if(abs(v[i])>abs(v[j]) || (abs(v[i])==abs(v[j]) && v[i]>0) ){
            cost = cost + ((j-i)*v[i] + ((j*j) - (i*i))*(v[i]*v[i]));
            i=j;
        } 
        if(j==n-1){
            cost = cost + ((j-i)*v[i] + ((j*j) - (i*i))*(v[i]*v[i]));
        }
    }
    cout<<cost<<endl;
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
            // cin>>t;
            for(int i=1;i<=t;i++){
                solve();
    }
    return 0;
}