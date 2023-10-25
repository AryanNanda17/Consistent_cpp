#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include<queue>     
#define ll long long
using namespace std;
 
 
void precal(){
}
 
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int sum = accumulate(v.begin(),v.end(),0);
    sort(v.begin(),v.end());
    if(sum%n!=0){
        cout<<"NO"<<endl;
        return;
    }
    int start =0;
    int end =n-1;
    int target = sum/n;
    while(start<end){
        if(v[end]>v[start] && v[start]<target-1 && v[end]>target+1){
            v[end]-=2;
            v[start]+=2;
        }
        else if(v[start]>=target-1){
            start++;
        }
        else if(v[end]<=target+1){
            end--;
        }
    }

    for(int i=0;i<n;i++){
        if(v[i]!=target){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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