#include <iostream>
// #include <bits/stdc++.h>
#include<cmath>
#include <numeric>
#include<map>
#include<algorithm>
#define ll long long
#define mod 1000000007
using namespace std;
void precal(){
}
void sieve(int n, vector<ll> given,int r)
{
    unordered_map<double, bool> v;
    for (int i = 0; i <= n; ++i) {
        v[i] = true;
    }
    v[0] = false;
    v[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (v[i] == false)continue;
        for (int j = i * i; j <= n; j += i)v[j] = false;
    }
    for(int i = 0;i<r;i++){
        double a = sqrt(given[i]);
        // cout<<a<<endl;
        if(v[a]){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return;
}
void solve(){
    int n;cin>>n;
    vector<ll> v(n);
    for(int i = 0;i<n;i++)cin>>v[i];
    sieve(1e6, v,n);
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