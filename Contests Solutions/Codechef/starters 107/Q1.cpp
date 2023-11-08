#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#define ll long long
using namespace std;
 
 
void precal(){
}
 
void solve(){
    int x,y,z;
    cin>>x>>y>>z;
    int a = x*y;
    int b = 24*60*z;
    if(a<=b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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