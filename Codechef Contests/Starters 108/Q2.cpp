#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include<map>
#include<algorithm>
#include<string>
#define ll long long
#define mod 1000000007
using namespace std;
void precal(){
}
bool isPrime(int n){
    int i =2;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}
bool isPalindrome(int n){
    string s = to_string(n);
    string a =s;
    reverse(a.begin(),a.end());
    return s==a;
}
void solve(){
    int n;
    cin>>n;
    // int i=0;
    // int j = 2;
    // int odd = 0;
    // int even = 0;
    // int check = 9;
    // int digits = 1;
    // while(i<n){
    //     if(j>check){
    //         check = check*10+9;
    //         digits++;
    //     }
    //     if(isPrime(j) && isPalindrome(j)){
    //         if(digits%2==0)even++;
    //         else odd++;
    //         i++;
    //     }
    //     j++;
    // }
    // cout<<even<<" "<<odd<<endl;
    if(n<=4){
        cout<<0<<" "<<n<<endl;
        return;
    }
    else{
        cout<<1<<" "<<n-1<<endl;
    }

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