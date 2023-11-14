#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#include<algorithm>
using namespace std;

void precal() {
}

void solve() {
    int n, k;
    cin >> n >> k;
    int max1 = INT_MIN;
    if(n<k){
        int a = n/2;
        int b = (n+1)/2;
        int start = (a%k) * ((n - a) % k);
        int end = (b % k) * ((n - b) % k);
        int max1 = max(start,end);
        if(max1==start) cout<<a<<endl;   
        else cout<<b<<endl;
        return;
    }
    else{
        int n1 = n%k;
        if(n1==0)n1=k;
        int n2 = k + (n%k);
        int a = n1/2;
        int b = (n1+1)/2;
        int c = n2/2;
        int d = (n2+1)/2;
        int start = (a%k) * ((n - a) % k);
        int end = (b % k) * ((n - b) % k);
        int start1 = (c%k) * ((n - c) % k);
        int end1 = (d % k) * ((n - d) % k);
        if(start>=end && start>=start1 && start>=end1){
            max1 = start;
        }
        else if(start1>=end && start1>=start && start1>=end1){
            max1 = start1;
        }
        else if(end>=start && end>=start1 && end>=end1){
            max1 = end;
        }
        else{
            max1 = end1;
        }
        if(max1==start){
            cout<<a<<endl;
        }
        else if(max1==end){
            cout<<b<<endl;
        }
        else if(max1== start1){
            cout<<c<<endl;
        }
        else{
            cout<<d<<endl;
        }
        return;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    precal();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}
