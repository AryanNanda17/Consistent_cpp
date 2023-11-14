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
    int ham = 0;
    for(int i =0;i<n;i++){
        if(s[i]=='H'){
            ham++;
        }
    }
    int tig = 0;
    int swapp = INT_MAX;
    for(int i = 0;i<n;i++){
        if(i==0){
            for(int j = 0;j<ham;j++){
                if(s[j]=='T')tig++;
            }
        }
        else{
            if(s[i-1]=='T')tig--;
            if(s[(ham+i-1)%n]=='T')tig++;
        }
        swapp=min(swapp,tig);
    }
    cout<<swapp;
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