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
    string a,b;
    cin>>a>>b;
    int n1 = 0;
    int n2 = 0;
    for(int i =0;i<n;i++){
        char a1 = a[i];
        char a2 = b[i];
        if(a1=='R' &&  a2=='S'){
            n1++;
        }
        if(a1=='R' &&  a2=='P'){
            n2++;
        }

        if(a1=='P' &&  a2=='S'){
            n2++;
        }
        if(a1=='S' &&  a2=='P'){
            n1++;
        }
        if(a1=='S' &&  a2=='R'){
            n2++;
        }
        if(a1=='P' &&  a2=='R'){
            n1++;
        }
    }
    if(n1>n2){
        cout<<0<<endl;
    }
    else{
        cout<<((n2-n1)/2)+1<<endl;
    }
    
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