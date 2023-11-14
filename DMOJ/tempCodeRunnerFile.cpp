#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include<map>
#include<algorithm>
#include<set>
#define ll long long
#define mod 1000000007
using namespace std;
void precal(){
}
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.second!=b.second){
        return a.second>b.second;
    }
    return a.first<b.first;
}
void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<int, int> > v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a, b));

    }
    sort(v.begin(),v.end(),cmp);
    multiset<int> s;
    for(int i=0;i<k;i++){
        int weight;
        cin>>weight;
        s.insert(weight);
    }
    long ans = 0;
    for(int i=0;i<n;i++){
        if(s.empty())break;
        else if(s.lower_bound(v[i].first)!=s.end()){
            ans+=v[i].second;
            s.erase(v[i].first);
        }
    }
    cout<<ans<<endl;

}   
 
int main(){
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