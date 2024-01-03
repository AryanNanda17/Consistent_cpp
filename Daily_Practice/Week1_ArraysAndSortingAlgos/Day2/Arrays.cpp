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
    ll n1,n2;
    cin>>n1>>n2;
    ll k,m;
    cin>>k>>m;
    vector<ll>v1(n1);
    vector<ll>v2(n2);
    for(int i=0;i<n1;i++)cin>>v1[i];
    for(int i=0;i<n2;i++)cin>>v2[i];
    if(v1[k-1]<v2[n2-m]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}   
 
int main(){
    #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
    #endif
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