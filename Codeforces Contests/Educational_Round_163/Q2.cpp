#include <iostream>
// #include <bits/stdc++.h>
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
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++)cin>>arr[i];
    bool flag=false;
    int mini=100;
    vector<int> res;
    for (int i=n-1; i>=0; i--)
    {
        if (arr[i]<10)
        {
            res.push_back(arr[i]);
            flag=true;
            mini=min(mini,arr[i]);
            continue;
        }
        if (flag)
        {
            while (arr[i]>0)
            {
                res.push_back(arr[i]%10);
                arr[i]/=10;
            }
            continue;
        }
        if (arr[i]>mini)
        {
            flag=true;
            while (arr[i]>0)
            {
                res.push_back(arr[i]%10);
                arr[i]/=10;
            }
        }
        else
        {
            mini=min(mini,arr[i]);
            res.push_back(arr[i]);
        }
    }
    flag=true;
    for (int i=1; i<res.size(); i++)
    {
        if (res[i]>res[i-1])
            flag=false;
    }
    cout<<(flag ? "YES":"NO")<<endl;
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