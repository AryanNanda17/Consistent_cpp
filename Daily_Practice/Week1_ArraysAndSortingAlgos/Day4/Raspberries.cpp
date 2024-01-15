#include <iostream>
// #include <bits/stdc++.h>
#include <numeric>
#include<map>
#include<algorithm>
#define ll long long
#define mod 1000000007
using namespace std;
void precal(){
}
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    if(k==2 || k==3 || k==5){
        int mini = INT_MAX;
        for(int i = 0;i<n;i++){
            if(v[i]%k==0)mini=0;
            mini = min(mini, k-(v[i]%k));
        }
        cout<<mini<<endl;
        return;
    }
    else{
        if(n==1){
            cout<<n-k<<endl;
            return ;
        }
        int count= 0;
        for(int i =0;i<n;i++){
            if(v[i]%2==0)count++;
        }
        int mini=max(0,2-count);
        for(int i = 0;i<n;i++){
            if(v[i]%k==0)mini=0;
            mini = min(mini, k-(v[i]%k));
        }
        cout<<mini<<endl;
        return;
    }

}   
 
int main(){
    #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
    #endif
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