#include <iostream>
// #include <bits/stdc++.h>
#include<vector>
#include <numeric>
#include<map>
#include<algorithm>
#define ll long long
#define mod 1000000007
using namespace std;
void precal(){
}
bool cmp(pair<ll,ll>a,pair<ll,ll>b){
    return (a.first-a.second)>(b.first-b.second);
}

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll> >v;
    for(int i =0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(),v.end(),cmp);
    ll sum= 0;
    for(int i=0;i<n;i++){
        sum+=v[i].first;
    }
    ll a = 0;
    int i =0;
    // cout<<endl;
    while(sum>m && i<n){
        // cout<<v[i].first<<" "<<v[i].second<<endl;
        sum -=(v[i].first-v[i].second);
        a++;
        i++;
    }
    if(sum>m){
        cout<<-1<<endl;
        return;
    }
    cout<<a<<endl;
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