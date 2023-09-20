#include<iostream>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        // string result;
        for(int i=0;i<n;i++){
            if(s[i]=='1' && i+2<n){
                if(s[i+1] == '1' || s[i+2]=='1'){
                    s[i+1]='0';
                    s[i+2]='0';
                    i+=3;
                }
                else{
                    continue;
                }
            }
        }
        cout<<s<<endl;
    }

}