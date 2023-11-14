#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include<set>
#define ll long long
using namespace std;
 
 
void precal(){
}
 
void solve(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    vector<int> v1(n1);
    vector<int> v2(n2);
    vector<int> v3(n3);
    unordered_map<int,int> mp;
    for(int i=0;i<n1;i++){
        cin>>v1[i];
        mp[v1[i]]++;
    }
    for(int i=0;i<n2;i++){
        cin>>v2[i];
        mp[v2[i]]++;
    }
    for(int i=0;i<n3;i++){
        cin>>v3[i];
        mp[v3[i]]++;
    }
    vector<int> output;
    for(auto i:mp){
        if(i.second>1){
            output.push_back(i.first);
        }
        // cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<output.size()<<endl;
    sort(output.begin(),output.end());
    for(int i=0;i<output.size();i++)cout<<output[i]<<endl;
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