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
    ll n,d;
    cin>>n>>d;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int j = 0;
    int ans = 0;
    for(int i= n-1;i>=0;i--){
        int total = v[i];
        if(v[i]>d){
            ans++;continue;
        }
        while(j<i){ 
            total+=v[i];
            // cout<<"total: "<<total<<" j:"<<j;
            if(total>d){
                j++;
                ans++;
                break;
            }
            j++;
        }
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