#include <iostream>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int min_number = INT_MAX;
        while(n--){
            int d;
            cin>>d;
            int s;
            cin>>s;
            min_number = min(min_number, ((s-1)/2 + d));
        }
        cout<<min_number<<endl;
    }

}