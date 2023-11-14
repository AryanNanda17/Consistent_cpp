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
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int count = 0;
    int i = 0;

    while (i < n) {
        int maxReach = -1;
        int maxJ = -1;

        for (int j = i + v[i]; j >= i - v[i]; --j) {
            if (j < n && j >= 0 && (j + v[j]) > maxReach) {
                maxReach = j + v[j];
                maxJ = j;
            }
        }

        if (maxJ == -1) {
            cout<< -1<<endl; 
            return;
        }

        count++;
        i = maxJ;

        while (i < n && i <= maxReach) {
            i++;
        }
    }

    cout<<count<<endl;
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