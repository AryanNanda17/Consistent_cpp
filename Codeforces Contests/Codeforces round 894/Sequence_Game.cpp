#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr1[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        vector<int> arr2;
        arr2.push_back(arr1[0]);
        for(int i=1;i<n;i++){
            if(arr1[i-1]<=arr1[i]){
                arr2.push_back(arr1[i]);
            }
            else{
                int a=min(arr1[i],arr1[i-1])-1;
                if(a==0){
                    a=a+1;
                }
                arr2.push_back(a);
                arr2.push_back(arr1[i]);
            }
        }
        cout<<arr2.size()<<endl;
        for(int i=0;i<arr2.size();i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
    }
 
}