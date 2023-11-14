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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int start =0;
    int end = n-1;
    sort(v.begin(),v.end());
    int ans1=0;
    if(v[end]-v[start]<=v[end]){
        cout<<n<<endl;
        return;
    }
    while(start<end){
        if((v[end]-v[start])<=v[end]){
            ans1= end -start;
            break;
        }
        else{
            end--;
        }
    }
    int ans2=0;    
    while(start<end){
        if((v[end]-v[start])<=v[end]){
            ans2= end -start;
            break;
        }
        else{
            start++;;
        }
    }
    cout<<max(ans1,ans2)-1<<endl;
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