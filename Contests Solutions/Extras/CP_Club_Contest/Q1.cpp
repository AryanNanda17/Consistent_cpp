#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include<queue>
#include<stack>
#define ll long long
using namespace std;
 
 
void precal(){
}
 
void solve(){
    // int n;
    // cin>>n;
    // vector<int> v(n);
    // for(int i=0;i<n;i++) cin>>v[i];

    int p,q;
    cin>>p>>q;

    if(p<q){
        cout<<(p-(q-p))<<endl;
    }
    else{
        cout<<q<<endl;
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