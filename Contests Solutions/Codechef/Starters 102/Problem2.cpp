#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        float n;
        cin>>n;
        float commission = (n*20)/100;
        cout<<ceil(100/commission)<<endl;
    }

}