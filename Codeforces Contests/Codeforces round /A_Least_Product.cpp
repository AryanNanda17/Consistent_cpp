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
 ll n;
    cin>>n;
    vector<ll>v(n);
    long long product = 1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        // product *=v[i];
    }
    bool negative=0;
    bool zero = 0;
    for(int i : v){
        if(i<0)negative=!negative;
        else if(i==0)zero = 1;
        else continue;
    }
    if(zero || negative)cout<<0<<endl;
    else{
        cout<<1<<endl<<1<<" "<<0<<endl;
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
            // precal();
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
                solve();
    }
    return 0;
}