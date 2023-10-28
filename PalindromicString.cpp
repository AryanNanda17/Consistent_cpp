#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include<set>
#define ll long long
using namespace std;
 
void precal(){
}

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    unordered_map<char,vector<int> > mp;
    for(int i = 0;i<n;i++){
        mp[s[i]].push_back(i);
    }
    int oddfreq = 0;
    for(auto i:mp){
        if(i.second.size()%2!=0)oddfreq+=1;
    }
    if(oddfreq>1){
        cout<<-1<<endl;
        return;
    }
    vector<int> output(n);
    int start = 0;
    int end = n-1;
    for(auto i: mp){

            int j = 0;œ
            if(i.second.size()%2==1){
                output[n/2] = i.second[0];
                j++;
            }
            while(j<i.second.size()){
                output[start]=i.second[j];
                j++;
                output[end] = i.second[j];
                j++;
                start ++;
                end--;
        }
    }
    for(int i =0;i<n;i++){
        cout<<output[i]+1<<" ";
    }
    cout<<endl;
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