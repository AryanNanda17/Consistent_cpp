#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        char a1 = 'a';
        char b2 = 'b';
        char c2 = 'c';
        int flag = 0;
        if(s[0]==a1 || s[1] == b2 || s[2] == c2)flag =1;
        if(flag){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    }

}