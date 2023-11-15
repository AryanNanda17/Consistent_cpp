#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include<map>
#include<set>
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
    set<int> s;
    for(int i = 0;i<n;i++){
        s.insert(v[i]);
    }
    int size = s.size();    
    vector<int> final(size+1,-1);
    vector<int> days(size+1);
    for(int i =0;i<n;i++){
        if(i==0){
            final[v[i]]=i;
            days[v[i]]=0;
        } 
        else{
            if(final[v[i]]==-1){
                days[v[i]]=i;
                final[v[i]]=i;
            } 
            else{
                int last = (i-final[v[i]])/2;
                days[v[i]]=max(last,days[v[i]]);
                final[v[i]]=i;
            }
        }
    }
    for(int i=1;i<=size;i++){
        days[i] = max(days[i],n-final[i]-1);
    }
    int ans1=INT_MIN;
    int ans2;
    for(int i=1;i<=n;i++){
        if(days[i]>ans1){
            ans1 = days[i];
            ans2 = final[i];
        }
    }
    cout<<ans1<<" "<<ans2<<endl;

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
            cin>>t;
            for(int i=1;i<=t;i++){
                solve();
    }
    return 0;
}