#include <iostream>
// #include <bits/stdc++.h>
#include <numeric>
#include<map>
#include<algorithm>
#define ll long long
#define mod 1000000007
using namespace std;
void precal(){
}

void solve(){
    int n;cin >> n;
    string s;cin >> s;
    int a = 0;
    int b = 0;
    for (auto it : s) {
        if (it == '0')a++;
        else b++; 
    }
    vector<int> v;
    int left0 = 0;
    int left1 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0')left0++;
        if (s[i] == '1')left1++;
        int right0 = a - left0;
        int right1 = b - left1;
        int left = i + 1;
        int right = n - left;
        left = (left + 1) / 2;
        right = (right + 1) / 2;
        if (left0 >= left && right1 >= right)v.push_back(1);
        else v.push_back(0);
    }
    int ans = -1;
    float middle = n;
    middle = middle / 2;
    vector<pair<float, int> > dist;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 1) {
            float temp = middle - (i + 1);
            dist.push_back(make_pair(abs(temp),i + 1));
        }
    }
    int f = 0;
    int mini = (n + 1) / 2;
    if (b >= mini) { f = 1; }
    if (f == 1) {
        dist.push_back(make_pair(middle,0));
    }
    sort(dist.begin(), dist.end());
    cout << dist[0].second << endl;
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