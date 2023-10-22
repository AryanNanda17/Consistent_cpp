#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // fstream output;
    // output.open("Cheeseburger_output.txt",ios::out);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int S, D, K;
        cin>>S>>D>>K;
        int flag=0;
        int bun = (S+D)*2;
        int ingridents = (S*2) + (D*4);
        int nDeckerBun= K+1;
        int nDeckerIngridents = 2*K;
        if(nDeckerBun<=bun){
            if(nDeckerIngridents<=ingridents)flag = 1;
        }
        if(flag)
            cout<<"Case #"<<i<<": YES"<<endl;
        else
            cout<<"Case #"<<i<<": NO"<<endl;
    }

}