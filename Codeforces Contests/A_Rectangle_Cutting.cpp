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
    ll a,b;
    cin>>a>>b;
    if((a%2!=0 && b%2!=0) || (a%2!=0 && b/2==a) || (b%2!=0 && a/2==b)){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
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