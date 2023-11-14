#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++)cin>>p[i];
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int> b(n);
    for(int i=0;i<n;i++)cin>>b[i];
    int m;
    cin>>m;
    vector<int> c(m);
    for(int i=0;i<m;i++)cin>>c[i];
    set<int> s[4];
    for(int i=0;i<n;i++){
        s[a[i]].insert(p[i]);
        s[b[i]].insert(p[i]);
    }
    for(int i=0;i<m;i++){
        int price = *s[c[i]].begin();
        for(int j=1;j<4;j++)s[j].erase(price);
        if(price) cout<<price<<" ";
        else cout<<-1<<" ";
    }

}