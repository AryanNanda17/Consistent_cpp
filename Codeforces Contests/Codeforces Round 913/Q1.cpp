#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include<map>
#include<algorithm>
#include<string>
#define ll long long
#define mod 1000000007
using namespace std;
void precal(){
}
 
void solve(){
    string s;
    cin>>s;
    char a=s[0];
    char b = s[1];
    for(int i =1;i<=8;i++){
        if (static_cast<char>('0' + i) == b) continue;
        string output = string(1, a) + to_string(i);
        cout << output << endl;
    }
    int start = 'a';
    for(int i =0;i<8;i++){
        if('a'+i==a)continue;
        string output = string(1, 'a'+i) + b;
        cout << output << endl;
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