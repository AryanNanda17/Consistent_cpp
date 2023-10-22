#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int sum = 0;
    int satisfied = 0;
    for(int i=0;i<n;i++){
        if(v[i]>=sum){
            satisfied++;
            sum+=v[i];
        }
    }
    cout<<satisfied;
}