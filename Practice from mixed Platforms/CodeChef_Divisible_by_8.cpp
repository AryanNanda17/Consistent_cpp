#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int nlen;
        string n;
        cin>>nlen>>n;
        if(nlen==1)cout<<"8"<<endl;
        else if(nlen==2){
            if(stoi(n)%8==0){
                cout<<n<<endl;
                continue;
            }
            for(int i=0;i<10;i++){
                n[nlen-1]=i + '0';
                if(stoi(n)%8==0){
                    cout<<n<<endl;
                    break;
                }
            }
        } 
        else{
            int num = stoi(n.substr(nlen-3,3));
            if(num%8==0){
                cout<<n<<endl;
                continue;
            }
            else{
                for(int i=0;i<10;i++){
                    n[nlen-1]=i + '0';
                    num = stoi(n.substr(nlen-3,3));
                    if(num%8==0){
                        cout<<n<<endl;
                        break;
                    }
                }
            }
        }
    }

}