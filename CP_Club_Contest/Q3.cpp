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
    int n;
    cin>>n;
    int k;
    cin>>k;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    long long pair =0;
    if(n/2==k){
        int j=n-1;
        for(int i=0;i<n;i++){
            pair = pair +j;
            j--;
        }
        cout<<pair<<endl;
        return;
    }
    // pair = pair+ (2*n)+ (k*(k+1)/2);
    pair = pair+(2*(n-k-k));
    for(int i=n-k+1;i<n;i++){
        pair=pair+(n-i);
    }
    cout<<pair<<endl;
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