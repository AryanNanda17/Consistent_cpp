#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a = 1;
        int b = 1;
        int c = n-a-b;
        if(c<1){
            c =1;
            b = n-a-c;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a = 1;
        int b = 1;
        int c = n-a-b;
        if(c<1){
            c =1;
            b = n-a-c;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

}