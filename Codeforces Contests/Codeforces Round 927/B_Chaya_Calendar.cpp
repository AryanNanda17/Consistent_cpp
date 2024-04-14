#include<iostream> 
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> numbers;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            numbers.push_back(x);
        }
        int answer=numbers[0];
        for(int i=1;i<n;i++){
            if(numbers[i]>answer){
                answer=numbers[i];
            }
            else{
                int temp=answer/numbers[i];
                if(temp*numbers[i]>answer){
                    answer=temp*numbers[i];
                }
                else{
                    answer=(temp+1)*numbers[i];
                }
            }
        }
        cout<<answer<<endl;
    } 
    return 0;
}