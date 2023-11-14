#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);  
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int sum = accumulate(v.begin(), v.end(), 0);
        if(sum<n){
            cout<<"NO"<<endl;
        }
        else if(sum%n==0){
            cout<<"YES"<<endl;
        }
        else if(k==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}
