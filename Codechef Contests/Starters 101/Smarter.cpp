#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float l, v1, v2;
	    cin>>l>>v1>>v2;
	    float a = ceil(l/v1);
	    float b = ceil(l/v2);
	    if(a<=b){
	        cout<<-1<<endl;
	    }
	    else{
	        cout<< a-b-1<<endl;
	    }
	    
	}
}
