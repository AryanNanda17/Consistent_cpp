#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        int k=0;
        int i=0;
        for(i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                continue;
            }
            else if(v[i+1]==v[i+2]){
                
            }
            else{
                int a =v[k+1];
                v[k+1]=v[i+1];
                v[i+1]=a;
                k+=2;
                i=k;
            }
        }
        if(i==k+1){
            for(int j=0;j<n;j++){
                cout<<v[j]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }


    }
}