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
    vector<int>v1(n);
    for(int i=0;i<n;i++)cin>>v1[i];
    vector<int>v2(n);
    for(int i=0;i<n;i++)cin>>v2[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    reverse(v2.begin(),v2.end());
    int sum = v1[0]+v2[0];
    int fl =1;
    for(int i =0;i<n;i++){
        if(v1[i]+v2[i]==sum)continue;
        else {
            fl =0;
            break;
        }
    }
    if(!fl)cout<<-1<<endl;
    else{
        for(auto &i : v1)cout<<i<<" ";
        cout<<endl;
        for(auto &i : v2)cout<<i<<" ";
        cout<<endl;
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