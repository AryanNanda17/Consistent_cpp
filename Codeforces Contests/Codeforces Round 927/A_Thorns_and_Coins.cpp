#include<iostream> 
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        long long int ans = 0;
        for(int i =1;i<n;i++){
            if(s[i]=='*'&&s[i+1]=='*'){
                break;
            }
            if(s[i]=='@'){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
