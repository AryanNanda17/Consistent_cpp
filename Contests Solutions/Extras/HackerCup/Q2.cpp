#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int p;
        cin>>p;
        vector<int> v;
        int s=41;d
        while(p>s){
            int flag =0;
            int max=0;
            for(int factor=min(s,p);factor>0;factor--){
                if(p%factor==0){
                    p=p/factor;
                    s=s-factor;
                    v.push_back(factor);
                    break;
                }
            }
        }
        if(v.empty()){
            cout<<"Case #"<<i<<": -1"<<endl;
            continue;
        }
        else{
            if(s!=0){
                v.push_back(s);
            }
        }
        cout<<"Case #"<<i<<": "<<v.size()<<" ";
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
