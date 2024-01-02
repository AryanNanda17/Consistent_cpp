#include <iostream>
#include<fstream>
#include <numeric>
#include<map>
#include<algorithm>
#define ll long long
#define mod 1000000007
using namespace std;
void precal(){
}
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int sum = v[0];
    int minPrefix = min(0, v[0]);
    int output = v[0];
    for(int i = 1;i<n;i++){
        if(abs(v[i]%2)==abs(v[i-1]%2)){
            sum = minPrefix = 0;
        }
        sum+=v[i];
        output = max(output, sum-minPrefix);
        minPrefix = min(minPrefix, sum);
    }
    cout<<output<<endl;
}   
int main(){
    #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
    #endif
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