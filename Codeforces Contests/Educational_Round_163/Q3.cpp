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
int columns;
bool canReachEnd(int row, int col, vector<string> &grid, bool canSkip, vector<vector<vector<int> > > &dp) {
   if (row == 1 && col == columns - 1) {
      return true;
   }

   if (dp[row][col][canSkip] != -1) {
      return dp[row][col][canSkip];
   }

   if (canSkip) {
      if (row == 0) {
         return dp[row][col][canSkip] = (canReachEnd(row, col + 1, grid, false, dp) | canReachEnd(row + 1, col, grid, false, dp));
      } else {
         return dp[row][col][canSkip] = (canReachEnd(row, col + 1, grid, false, dp) | canReachEnd(row - 1, col, grid, false, dp));
      }
   } else {
      if (grid[row][col] == '>') {
         return dp[row][col][canSkip] = canReachEnd(row, col + 1, grid, true, dp);
      } else {
         return dp[row][col][canSkip] = false;
      }
   }
}
void solve(){
      cin >> columns;
      vector<string> grid(2);
      for (int i = 0; i < 2; i++)cin >> grid[i];
      vector<vector<vector<int> > > dp(2, vector<vector<int> >(columns, vector<int>(2, -1)));
      if (canReachEnd(0, 0, grid, true, dp)) {
         cout << "YES" << endl;
      } else {
         cout << "NO" << endl;
      }
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