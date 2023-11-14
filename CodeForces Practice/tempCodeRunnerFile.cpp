#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include<map>
#include<algorithm>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
void precal(){
}
int highestfactor(int n){
    int factor = 1;
    for(int i =1;i<=n/2;i++){
        if(n%i==0)factor=i;
    }
    return factor;
}
void solve(){
    int n;
    cin>>n;
    vector<int> v;
    v.push_back(n);
    int a = n;
    while(a!=1){
        a = highestfactor(a);
        v.push_back(a);
    }
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}   
 
int main(){
    // #ifndef ONLINE_JUDGE
    //         freopen("input.txt","r",stdin);
    //         freopen("output.txt","w",stdout);
    // #endif
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