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
    int n,x;
    cin>>n>>x;
    unordered_map<int,int>mp(n);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        mp[a]++;
    }
    int finalans = 1;
    int ans = 1;
    for(int i = 0;i<2*x;i++){
        ans = finalans;
        for(int i =1;i<=x;i++){
            if(mp.count(i)){
                ans = finalans;
                continue;
            }
            else{
                ans--;
                if(ans==0){
                    finalans++;
                    break;
                }
            }
        }
        if(ans==0)continue;
        for(int j = x-1;j>=0;j--){
            if(mp.count(j)){
                ans = finalans;
                continue;
            }
            else{
                ans--;
                if(ans==0 && j!=0){
                    finalans++;
                    break;
                }
            }
        }
    }
    cout<<finalans<<endl;
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