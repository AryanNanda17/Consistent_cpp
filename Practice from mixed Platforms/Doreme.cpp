#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include<set>
#define ll long long
using namespace std;
 
 
void precal(){
}
 
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    if(mp.size()>=3){
        cout<<"NO"<<endl;
        return;
    }
    if(mp.size()==1){
        cout<<"YES"<<endl;
        return;
    }
    int i=0;
    vector<int> c(2);
    for(auto it: mp){
        c[i++]=it.second;
    }
    if(abs(c[0]-c[1])>=2){
        cout<<"NO";
    }
    else {
        cout<<"YES";
    }
    cout<<endl;
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