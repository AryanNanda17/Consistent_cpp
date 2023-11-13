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
    int ans = 0;
    for(int i = 0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if((a==1 && b==1) or (b==1 && c==1) or (a==1 && c==1))ans++;
    }
    cout<<ans<<endl;
}   
 
int main(){
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