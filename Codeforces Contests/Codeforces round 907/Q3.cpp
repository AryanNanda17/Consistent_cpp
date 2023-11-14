#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include<algorithm>
#define ll long long
using namespace std;
 
 
void precal(){
}
 
void solve(){
    long n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.rbegin(),v.rend());
    long long ts = accumulate(v.begin(),v.end(),0LL);
    long long s1 = 0;
    long long r = ts;
    for(long long index = 0;index<n;index++){
        s1+=v[index];
        ts-=v[index];
        long long surplus = 0;
        if(s1>ts){
            surplus = s1-ts;
            surplus = (surplus+1)>>1;
        }
        r = min(r,static_cast<long long> (index+1+ts+surplus));

    }
    cout<<r<<endl;
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