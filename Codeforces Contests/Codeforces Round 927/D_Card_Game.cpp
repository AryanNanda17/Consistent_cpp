#include <iostream>
#include<map>
#include<string>
#include<vector>
  using namespace std;
  using ll = long long;
  #define rep(i, n) for (ll i = 0; i < n; i++)
  #define ll long long
  // my function
  void mrinfamous()
  {
ll n;cin>>n;
char c;cin>>c;
map<char,vector<string> >  m;
rep(i,2*n){
string s;cin>>s;
m[s[1]].push_back(s);
}

vector<char> v;
v.push_back('C');
v.push_back('D');
v.push_back('H');
v.push_back('S');

vector<pair<string,string> > ans;


rep(i,v.size())sort(m[v[i]].begin(),m[v[i]].end());
ll count=0;
for(ll i=0;i<v.size();i++){
  if(v[i]!=c){
    if(m[v[i]].size()%2==1)count++;
  }
}

if(count>m[c].size()||m[c].size()%2!=count%2)cout<<"IMPOSSIBLE"<<endl;
else {

  for(ll i=0;i<v.size();i++){
    if(v[i]!=c){
      if(m[v[i]].size()%2==1){
        cout<<m[v[i]][m[v[i]].size()-1]<<" "<<m[c][m[c].size()-1]<<endl;
        m[v[i]].pop_back();
        m[c].pop_back();
      }
    }
  }

  for(ll i=0;i<v.size();i++){
    char a=v[i];
    ll j=0;
    while(j<m[a].size()){
      cout<<m[a][j]<<" "<<m[a][j+1]<<endl;
      j+=2;
    }
  }
}
  }
     
     
  


    


   

   

       
  
  


  int main()
  {


    ll t;
    cin>>t;
  
    while (t--)
    {
      mrinfamous();
    }
    return 0;
  }