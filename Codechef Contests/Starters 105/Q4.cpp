#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#define ll long long
using namespace std;
 
 
void precal(){
}
 
void solve(){
    int n,p,q;
    cin>>n>>p>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    if(p==0 && q==0){
        int max = max_element(v.begin(),v.end())-v.begin();
        int min = min_element(v.begin(),v.end())-v.begin();
        cout<<v[max]-v[min]<<endl;
        return;
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