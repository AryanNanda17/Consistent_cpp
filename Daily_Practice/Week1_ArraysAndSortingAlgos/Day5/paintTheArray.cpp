#include<iostream>
#include <numeric>
#include<map>
#include<bits/stdc++.h>
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
    vector<ll> ans1;
    vector<ll> ans2;
    for(int i = 0;i<n;i++){
        if(i%2==0){
            ans1.push_back(v[i]);
        }
        if(i%2==1){
            ans2.push_back(v[i]);
        }
    }
    sort(ans1.begin(),ans1.end());
    sort(ans2.begin(),ans2.end());
    ll a = 0;
    ll b = 0;
    for(int i = 0;i<ans1.size();i++){
        a = __gcd(a,ans1[i]);
    }
    for(int i = 0;i<ans2.size();i++){
        b = __gcd(b,ans2[i]);
    }
    int fl1 = 1;
    int fl2 = 1;
    for(int i =0;i<ans1.size();i++){
        if(ans1[i]%b==0){
            fl1 = 0;
            break;
        }
    }
    if(fl1){
        cout<<b<<endl;
        return;
    }
    for(int i =0;i<ans2.size();i++){
        if(ans2[i]%a==0){
            fl2 = 0;
            break;
        }
    }
    if(fl2){
        cout<<a<<endl;
        return;
    }
    cout<<0<<endl;
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