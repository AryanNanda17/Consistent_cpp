#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m;
        cin>>m;
        char output[n][m];
        for(int i=0;i<n;i++){
            cin>>output[i];
        }
        string name="vika";
        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(output[j][i]==name[k]){
                    k++;
                    break;
                }
            }
        }
        if(k==name.length()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
 
 
    }
 
}