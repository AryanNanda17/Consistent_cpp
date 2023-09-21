#include<iostream>
using namespace std;
// TLE Error
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
        for(int i=maxh;i>=0;i--){
            int  height = 0;
            for(int j=0;j<n;j++){
                int a = i - v[j];
                if(a>0){
                    height +=a;
                }
            }
            if(height<=x){
                cout<<i<<endl;
                break;
            }
        }
    }

}