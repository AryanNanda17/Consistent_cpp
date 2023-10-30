#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#define ll long long
using namespace std;
 
 
void precal(){
}
 
void solve(){
        int n;
        int q;
        cin>>n>>q;
        vector<int> v(n);
        vector<int> v1(q);
        for(int i=0;i<n;i++)cin>>v[i];
        for(int i=0;i<q;i++)cin>>v1[i];
        vector<int> a;
        for(int i = 0;i<q;i++){
            int temp = v1[i];
            if(a.empty() || a.back()>temp){
                a.push_back(temp);
            }
        }
        for(int i =0;i<n;i++){
            for(int j=0;j<a.size();j++){
                if(v[i]%(1<<a[j])==0){
                    v[i]|=1<<(a[j]-1);
                }
            }
        }
        for(int i = 0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
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