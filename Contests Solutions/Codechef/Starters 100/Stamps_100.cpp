#include<iostream>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        string s=a;
        for(int i=0;i<n-2;i++){
            if(s[i]=='1'){
                if(s[i+1] == '1' || s[i+2]=='1'){
                    s[i+1]='0';
                    s[i+2]='0';
                    i+=2; 
                }
            }
        }
        cout<<s<<endl;
    }

}
