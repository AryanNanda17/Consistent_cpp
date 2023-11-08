#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#define ll long long
using namespace std;
 
 
void precal(){
}
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int count = 0;
    int o = 0;
    for(int i = 0;i<k;i++){
        o|=v[i];
    }
    if(o%2==1){
        count++;
    }
    for(int i=k;i<n;i++){
        o^=v[i-k];
        o|=v[i];
        if(o%2==1){
        count++;
    }
    }
    cout<<count<<endl;
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