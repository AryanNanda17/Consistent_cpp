#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// // Function to return gcd of a and b 
// int gcd(int a, int b) 
// { 
//     // Find Minimum of a and b 
//     int result = min(a, b); 
//     while (result > 0) { 
//         if (a % result == 0 && b % result == 0) { 
//             break; 
//         } 
//         result--; 
//     } 
  
//     // Return gcd of a and b 
//     return result; 
// } 
// int lcm(int a, int b) 
// { 
//     int greater = max(a, b); 
//     int smallest = min(a, b); 
//     for (int i = greater; ; i += greater) { 
//         if (i % smallest  == 0) 
//             return i; 
//     } 
// } 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,k;
	    cin>>x>>y>>k;
	    for(int i=0;i<k;i++){
	        int GCD = gcd(x,y);
	        if(x>y){
	            x = GCD;
	        }
	        else{
	            y = GCD;
	        }
	        if(x==y){
	            cout<<x+y<<endl;
	            break;
	        }
	        int LCM = lcm(x,y);
	        if(x>y){
	            x = LCM;
	        }
	        else{
	            y = LCM;
	        }
	    }
	    if(x==y){
	       continue;
	   }
	    cout<<x+y<<endl;
	}
}
