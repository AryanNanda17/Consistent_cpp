#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t; 
while(t--){
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        int diff = (abs(a-b)+1)/2;
        int ans = (diff+c-1)/c;
        cout<<ans<<endl;
}
}