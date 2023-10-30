#include<iostream>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    int n = s.length();
    int cost = 0;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i] && s[i+1]!=t[i+1]){
            cost++;
            i++;
        }
        else if(s[i]!=t[i]){
            cost++;
        }

    }
    cout<<cost<<endl;
}