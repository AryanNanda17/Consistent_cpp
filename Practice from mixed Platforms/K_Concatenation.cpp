#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#define ll long long
using namespace std;
 
void precal(){
}
long MaximumSumSubarray(vector<int> v){
    int  n=v.size();
    ll sum =0;
    ll max_sum = 0;
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(sum>max_sum)max_sum=sum;
        if(sum<0)sum=0;
        cout<<"max_sum is :"<<max_sum<<endl;
    }
    return max_sum;
}
long suffix_sum(vector<int>v){
    int n = v.size();
    ll suffix_sum = 0;
    ll max_suffix_sum = INT_MIN;  
    for(int i=n-1;i>=0;i--){
        suffix_sum += v[i];
        max_suffix_sum = max(max_suffix_sum,suffix_sum);
    }  
    return max_suffix_sum;
}
long prefix_sum(vector<int> v){
    int n = v.size();
    ll prefix_sum = 0;
    ll max_prefix_sum = INT_MIN;
    for(int i=0;i<n;i++){
        prefix_sum += v[i];
        max_prefix_sum = max(max_prefix_sum,prefix_sum);
    }
    return max_prefix_sum;
}
void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll kadane = MaximumSumSubarray(v);
    cout<<"kadane :"<<kadane<<endl;
    if(k==1){
        cout<<kadane<<endl;
        return;
    }
    ll sum =0;
    for(int i=0;i<n;i++)sum+=v[i];
    ll max_prefix_sum = prefix_sum(v);
    ll max_suffix_sum = suffix_sum(v);
    ll final_sum = 0;
    if(sum>=0){
        final_sum = max(kadane,max_prefix_sum + max_suffix_sum + ((k-2)*sum));
    }
    else {
        final_sum = max(max_prefix_sum + max_suffix_sum,kadane);
    }
    cout<<final_sum<<endl;
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