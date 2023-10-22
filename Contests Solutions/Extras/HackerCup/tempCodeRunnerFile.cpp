#include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//         int p;
//         cin>>p;
//         vector<int> v;
//         int s=41;
//         int factor=-1;
//         while(p>1){
//             int flag =0;
//             for(int factor=0;factor<min(s,p);factor++){
//                 if(p%factor==0){
//                     v.push_back(factor);
//                     flag = 1;
//                     p/=factor;
//                     s-=factor;
//                 }
//             }
//             if(!flag){
//                 cout<<"Case #"<<i<<": -1"<<endl;
//                 break;
//             }
//         }
//         if(v.empty()){
//             continue;
//         }
//         cout<<"Case #"<<i<<": "<<v.size();
//         for(int i=0;i<v.size();i++){
//             cout<<v[i]<<" ";
//         }

//     }
// }