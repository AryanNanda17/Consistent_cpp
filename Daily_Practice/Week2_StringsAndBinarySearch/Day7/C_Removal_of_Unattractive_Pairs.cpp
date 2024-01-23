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
    int n;cin>>n;
    string s;cin>>s;
    vector<int> v(26,0);
    int maxi =-1;
    for(auto &i : s){
        v[i-'a']++;
        maxi = max(maxi, v[i-'a']);
    }
    if(maxi>n/2){
        cout<< (n-(2*(n-maxi)))<<endl;
    }
    else{
        cout<< (n%2)<<endl;
    }
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