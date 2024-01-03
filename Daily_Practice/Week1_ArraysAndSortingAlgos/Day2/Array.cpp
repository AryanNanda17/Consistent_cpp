#include <iostream>
// #include <bits/stdc++.h>
#include <numeric>
#include<map>
#include<vector>
#include<algorithm>
#define ll long long
#define mod 1000000007
using namespace std;
void precal(){
}

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<int> output1; // set 1 for <0
    vector<int> output2; // set 2 for >0
    vector<int> output3; // set 3 for =0
    for(auto &i : v){
        if(i==0)output3.push_back(i);
        else if(i>0)output2.push_back(i);
        else if(i<0 && output1.size()==0)output1.push_back(i);
        else output3.push_back(i);
    }
    int count = 0;
    if(output2.size()==0){
        for(int i = 0;i<output3.size();i++){
            if(output3[i]<0){
                output2.push_back(output3[i]);
                output3.erase(output3.begin()+i);
                count++;
                i--;
            }
            if(count==2)break;
        }
    }
    cout<<output1.size()<<" ";
    for(auto &i : output1)cout<<i<<" ";
    cout<<endl<<output2.size()<<" ";
    for(auto &i: output2)cout<<i<<" ";
    cout<<endl<<output3.size()<<" ";
    for(auto &i: output3)cout<<i<<" ";
    cout<<endl;
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
            // cin>>t;
            for(int i=1;i<=t;i++){
                solve();
    }
    return 0;
}