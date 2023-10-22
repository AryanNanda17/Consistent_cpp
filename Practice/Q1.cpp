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
    int sum =0;
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++){
        if(i==0 || i%2==0){
            sum+=v[i];
        }
        else{
            sum-=v[i];
        }
    }
    if(sum>=0){
        cout<<"Keyur"<<endl;
    }
    else cout<<"Nikhil"<<endl;
    
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