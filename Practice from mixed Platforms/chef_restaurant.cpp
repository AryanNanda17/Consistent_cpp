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
    long n,k;
    cin>>n>>k;
    vector<int>v(n);
    long ans = 0;
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int i = 0;
    int j = 1;
    while(j<n){
        if(abs(v[i]-v[j])>=k){
            if(i==j){
                j++;
                continue;
            }
            ans = ans + n-j;
            i++;
        }
        else j++;
    }
    cout<<ans<<endl;
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