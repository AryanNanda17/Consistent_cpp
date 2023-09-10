#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        map<int,int> map;
        for(int i=0;i<n;i++){
            map[arr[i]]++;
        }
        int i=0;
        int width=0;
        int flag =true;
        while(i<n){
            int height=arr[i];
            int need=width+map[height];
            width+=map[height];
            if(map[need]==0){
                cout<<"No"<<endl;
                flag =false;
                break;
            }
            int cur=i;
            i++;
            while(i<n && arr[i]==arr[cur]){
                i++;
            }
        }
        if(flag)
        cout<<"Yes"<<endl;
    }
 
}