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
int find(vector<int> &arr,int n){
    int count = 0;
    for(int i =0;i<n;i++){
        if(arr[i]==i+1)count++;
    }
    return count;
}
void update(vector<int> &arr, vector<int> &arr1,int n){
    for(int i = 0;i<arr1[n];i++){
        arr[i]++;
    }
}
void solve(){
    int n,k,d;
    cin>>n>>k>>d;
    vector<int>v(n);
    vector<int>v1(k);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<k;i++)cin>>v1[i];
    int ans = 0;
    for(int i = 0;i<min(d,2*n);i++){
        int count = find(v,n);
        ans = max(ans, count+(d-(i+1))/2);
        update(v,v1,i%k);
    }
    cout<<ans<<endl;
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