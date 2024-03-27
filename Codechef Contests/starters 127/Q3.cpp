#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;cin>>t;
	 while(t--){
	     long long n,k,x;cin>>n>>k>>x;
	     long long sum = 0;
	     if(k==1){
	         cout<<"Yes"<<endl;
	         continue;
	     }
	     vector<long long> v;
	     v.push_back(1);
	     for(int i = 0;i<=k;i++){
	         if(sum>=x){
	             cout<<"No"<<endl;break;
	         }
	         if(i==k-1){
	             if(sum<x){
	                 cout<<"YES"<<endl;
	             }
	             else cout<<"No"<<endl;
	             break;
	         }
	        sum+=v[i];
	        v.push_back(sum+1);
	     }
	 }

}
