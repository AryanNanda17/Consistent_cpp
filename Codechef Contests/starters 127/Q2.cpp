#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;cin>>t;
	 while(t--){
	     int a,b;cin>>a>>b;
	     if(a-b>=10){
	         cout<<0<<endl;
	          continue;
	     }
	     int c = b+10;
	     int count = 0;
	     while(a<c){
	         a+=3;
	         count++;
	     }
	     cout<<count<<endl;
	 }

}
