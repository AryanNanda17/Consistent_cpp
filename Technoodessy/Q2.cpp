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
bool secret(const string& sub) {
    int x = 0;
    vector<int> freq(26, 0);

    for (char c : sub) {
        freq[c - 'a']++;
    }

    for (int a : freq) {
        if (a % 2 == 1) {
            x++;
            if (x > 1) {
                return false;
            }
        }
    }
    return true;
}
void solve(){
    string s;
    cin>>s;
    int ans = 0;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (secret(s.substr(i, j - i + 1))) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}   
 
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            precal();
            int t=1;
            for(int i=1;i<=t;i++){
                solve();
    }
    return 0;
}