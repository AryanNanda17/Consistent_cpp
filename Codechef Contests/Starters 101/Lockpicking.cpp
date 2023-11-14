#include <iostream>
#include<climits>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        string k;
        cin>>s>>k;
        int min_moves = INT_MAX;
        for(int i=0;i<=n-m;i++){
            int moves = 0;
            for(int j=0;j<m;j++){
                int dif = abs(int(s[i+j]) - int(k[j]));
                moves+= min(dif, 10-dif);
            }
        min_moves = min(min_moves,moves);
        }
        
        cout<<min_moves<<endl;
    }
}
