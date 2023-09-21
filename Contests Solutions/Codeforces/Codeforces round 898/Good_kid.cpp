#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(), vec.end());
        vec[0]+=1;
        int prod = 1;
        for(int i=0;i<n;i++){
            prod*=vec[i];
        }
        cout<<prod<<endl;
    }

}