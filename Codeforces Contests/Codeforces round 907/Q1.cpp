#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int first = v[0];
        int flag = 0;
        for(int i=1;i<n;i++){
            int temp = v[i];
            if(first>temp){
                if(((i-1)&i)!=0)flag = 1;
            }
            first = temp; 
        }
        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

}