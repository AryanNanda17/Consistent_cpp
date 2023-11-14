#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int x;
        cin>>n;
        cin>>x;
        vector<int> v;
        int sum =0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
            sum+=a;
        }
        int maxh=sum+x;
        for(long long i=x;i>=0;i--){
            int  height = 0;
            for(int j=0;j<n;j++){
                int a = maxh - v[j];
                if(a>0){
                    height +=a;
                }
            }
            if(height<=x){
                cout<<maxh<<endl;
                break;
            }
            else{
                maxh--;
            }
        }
    }

}