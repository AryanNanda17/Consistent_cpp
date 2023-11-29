#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include<map>
#include<algorithm>
#define ll long long
#define mod 1000000007
using namespace std;
void precal(){
}
 
void solve(){
    int a,b;
    cin>>a>>b;
    int c=a;
    int d=b;
    ll ans1 = 0;
    while(a%b!=0){
        a++;
        if(b==0){
            ans1 = INT_MAX;
            break;
        }
        b--;
        ans1++;
    }
    ll ans2=0;
    while(c%d!=0){
        c--;
        if(c==0){
            ans2 = INT_MAX;
            break;
        }
        d++;
        ans2++;
    }
    cout<<min(ans1,ans2)<<endl;
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