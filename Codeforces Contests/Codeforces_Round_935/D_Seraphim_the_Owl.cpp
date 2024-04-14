#include <iostream>
#include <numeric>
#include <map>
#include <algorithm>
#define ll long long
#define mod 1000000007
using namespace std;

void precal() {
}

void solve() {
    ll n, m;
    cin >> n >> m;
    ll x[n], y[n], z[n];
    for (ll i = 0; i < n; i++)cin >> x[i];
    for (ll i = 0; i < n; i++) {
        cin >> y[i];
        z[i] = min(y[i], x[i]);
    }
    ll suffix_sum[n];
    for (ll i = n - 1; i >= 0; i--) {
        if (i == n - 1)
            suffix_sum[i] = z[i];
        else
            suffix_sum[i] = suffix_sum[i + 1] + z[i];
    }
    ll answer = 1e18;
    for (ll i = 0; i < m; i++) {
        ll sum = x[i];
        if (i + 1 < n)sum += suffix_sum[i + 1];
        answer = min(answer, sum);
    }
    cout << answer << endl;
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
