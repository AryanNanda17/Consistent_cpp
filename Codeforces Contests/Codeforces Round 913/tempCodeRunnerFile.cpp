#include <iostream>
#include <stack>
#include <string>

using namespace std;
bool cmp(pair<char,int> &a,pair<char,int> &b){
    return a.second<b.second;
}
void solve() {
    string s;
    cin >> s;
    vector<pair<char,int> > like,v2, share, v4, v4s, likes, result;
    int n = s.size();
    for(int i =0;i<n;i++){
        if(s[i]<='Z'){
            if(s[i]=='B'){
                if(!like.empty()){
                    like.pop_back();
                }
            }
            else{
                like.emplace_back(s[i],i);
            }
        }
        else{
            if(s[i]=='b'){
                if(!v2.empty()){
                    v2.pop_back();
                }
            }
            else{
                    v2.emplace_back(s[i],i);
            }
        }

    }
    for(auto i :like){
            result.push_back(i);
        }
        for(auto i: v2){
            result.push_back(i);
        }
    sort(result.begin(),result.end(),cmp);
    for(auto itr: result){
        cout<<itr.first;
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
