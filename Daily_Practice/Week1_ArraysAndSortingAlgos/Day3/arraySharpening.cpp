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
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int pe = -1;
    int se = n;
    for(int i=0;i<n;i++){
        if(v[i]<i)break;
        pe = i;
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]<(n-1-i))break;
        se =i;
    }
    if(se<=pe)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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