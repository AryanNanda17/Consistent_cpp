#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#define ll long long
using namespace std;
 
 
void precal(){
}
 
void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    reverse(str.begin(), str.end());
    for(int i=0;i<n;i++){
        if(str[i]=='0' ||str[i]=='1' ||str[i]=='2' ||str[i]=='3' ||str[i]=='4' ||str[i]=='5' ||str[i]=='6' ||str[i]=='7' ||str[i]=='8' ||str[i]=='9'){
            str[i] = ' ';
        }
    }
    cout<<str<<endl;
    
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