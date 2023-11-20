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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int a=0;
    int b=0;
    int index;
    char alpha;
    for(int i =0;i<s.length();i++){
        if(s[i]=='A')a++;
        else b++;
    }
    if(b==k){
        cout<<0<<endl;
        return;
    }
    else if(b<k){
        alpha = 'B';
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                a--;
            }
            if(a==n-k){
                index = i;
            }
        }
    }
    else if(b>k){
        alpha = 'A';
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                b--;
            }
            if(b==k){
                index = i;
                break;
            }
        }
    }
    cout<<1<<endl<<index+1<<" "<<alpha<<endl;
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