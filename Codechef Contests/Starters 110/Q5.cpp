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
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
void solve(){
    ll h;
    cin>>h;
    ll moves = 0;
    int ap = 1;
    while(h>0){
        if(isPrime(h)){
            h = 0;
            moves++;
            break;
        }
        else{
            h = h-ap;
            ap*=2;
            moves++;
        }
    }
    if(h!=0){
        cout<<-1<<endl;
    }
    else{
        cout<<moves<<endl;
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