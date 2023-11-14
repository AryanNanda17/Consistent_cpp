#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int a=0;
    for(int i=0;i<n;i++){
        int b =k;
        if(s[i]=='B'){
            a++;
            int j=0;
            while(b--){
                if((i+j)>=n){
                    continue;
                }
                s[i+j]='W';
                j++;
            }
        }
    }
    cout<<a<<endl;
    }

}