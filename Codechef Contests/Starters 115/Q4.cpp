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
    int n,x;
    cin>>n>>x;
    if(x==0){
        for(int i = 1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    if(n-x<=1){
        cout<<-1<<endl;
        return;
    }
    int a = n-1-x;
    x = n+1-a;
    cout<<x<<" ";
    int i = 1;
    for(int j=1;j<n;j++){
        if(j==x){
            i++;
        }
        cout<<i<<" ";
        i++;
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
            cin>>t;
            for(int i=1;i<=t;i++){
                solve();
    }
    return 0;
}