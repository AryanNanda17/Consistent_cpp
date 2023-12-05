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
    string s;
    cin>>s;
    long long maxcount = 0;
    unordered_map<char,ll> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        maxcount = max(maxcount, mp[s[i]]);
    }
    if(maxcount>n/2){
        cout<<(2*maxcount-n)<<endl;
    }
    else{
        if(n%2==1){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
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
            cin>>t;
            for(int i=1;i<=t;i++){
                solve();
    }
    return 0;
}