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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll maxi,mine;
    sort(v.begin(),v.end());
    maxi = max(v[n-1]*v[n-1], v[0]*v[0]);
    mine = min(v[0]*v[0], min(v[0]*v[n-1],v[n-1]*v[n-1]));
    cout<<mine<<" "<<maxi<<endl;
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