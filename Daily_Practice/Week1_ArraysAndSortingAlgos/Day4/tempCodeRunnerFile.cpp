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
    vector<pair<ll,ll> >v;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        v.push_back(make_pair(a,i));
    }
    sort(v.begin(),v.end());
    vector<ll> sum(n);
    sum[0]=v[0].first;
    for(int i =1;i<n;i++){
        sum[i]=v[i].first+sum[i-1];
    }
    vector<int> output(n);
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            output[v[i].second]=i;
            continue;
        }
        if(sum[i]>v[i+1].first){
            output[v[i].second]=output[v[i+1].second];
        }
        else{
            output[v[i].second]=i;
        }
    }
    for(int i =0;i<n;i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;
}   
 
int main(){
//     #ifndef ONLINE_JUDGE
//             freopen("input.txt","r",stdin);
//             freopen("output.txt","w",stdout);
//     #endif
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            precal();
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
                solve();
    }
    return 0;
}