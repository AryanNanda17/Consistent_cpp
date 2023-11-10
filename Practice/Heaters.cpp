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
    int n,r;
    cin>>n>>r;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int last = -1;
    int ans = 0;
    while(last<n-1){
        int pos = -1;
        for(int i=n-1;i>max(-1, last - r + 1);i--){
            if(v[i]==1 && i-r<=last){
                pos = i;
                break;
            }
        }
        if(pos==-1){
            cout<<-1<<endl;
            return;
        }
        last = pos+r-1;
        ans++;
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