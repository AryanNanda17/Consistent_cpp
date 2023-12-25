#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include<set>
#include<algorithm>
#define ll long long
#define mod 1000000007
using namespace std;

 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char> st;
    ll count = 0;
    for(auto it: s){
        st.insert(it);
        count+=st.size();
    }
    cout<<count<<endl;
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