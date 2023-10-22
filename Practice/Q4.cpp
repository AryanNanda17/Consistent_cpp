#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#define ll long long
using namespace std;
 
 
void precal(){
}
 
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    if(n==3){
        cout<<2<<endl;
        return;
    }
    int maxBitwiseAnd = v[0];

    for (int i = 1; i < n; i++) {
        maxBitwiseAnd &= v[i];
    }

    if (maxBitwiseAnd != 0) {
        cout << maxBitwiseAnd << endl;
    }
    else {
        if ((v[0] & (v[0] + 1)) >= maxBitwiseAnd) {
            cout << (v[0] & (v[0] + 1)) << endl;
        }
        else {
            cout << (v[0] & (v[0] - 1)) << endl;
        }
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
            // cin>>t;
            for(int i=1;i<=t;i++){
                solve();
    }
    return 0;
}