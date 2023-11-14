#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include<algorithm>
#define ll long long
using namespace std;
 
 
void precal(){
}
 
void solve(){
    int n,k;
    cin>>n>>k;
    int max1 = INT_MIN;
    int x;
   for(int s=0,e=n-1;s<=e;){
        int start = (start%k)*((n-start)%k);
        int end = (end%k)*((n-end)%k);
        int m=(s+e)/2;
        int mid = (mid%k)*((n-mid)%k);
        if(mid>start){
            max1 = mid;
            x = m;
            s = m + 1;
        }   
        else if (mid<start){
            e = m-1;
        }
        else{
            max1 = mid;
            x = m;
            break;
        }
   }    
    cout<<x+1<<endl;
    
    
    
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