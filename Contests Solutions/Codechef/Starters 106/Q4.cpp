#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include<algorithm>
#define ll long long
using namespace std;
 
 
void precal(){
}
 
void solve(){
    int n,m;
    cin>>n>>m;
    int x,y;
    cin>>x>>y;
    int min1 = min(x,m-n+1)*n;
    int min2 = min(y,n-y+1)*m;
    int ans = min(min1,min2);
    ans = (m*n)-ans;
    cout<<ans<<endl;

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