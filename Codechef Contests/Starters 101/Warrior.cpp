#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int h;
        cin>>n>>h;
        vector<int> vec;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(), vec.end());
        int sum = 0;
        for(int i=n-1;i>=0;i--){
            sum+=vec[i];
            if(sum>=h){
                cout<<vec[i]<<endl;
                break;
            }
        }
        if(sum<h){
            cout<<0<<endl;
        }
        
    }

}