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
    int a,b,c;
    cin>>a>>b>>c;
    ll ans=0;
    ans+=a;
    int extroverts = b/3;
    double extroverts_extra = b%3;
    ans+=extroverts;
    // cout<<ans<<endl;
    if(extroverts_extra==0){
        double a = c;
        ans+=ceil(a/3);
        cout<<ans<<endl;
    }
    else if(extroverts_extra+c>=3){
        double a = extroverts_extra+c;
        ans+=ceil(a/3);
        cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;
    }
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