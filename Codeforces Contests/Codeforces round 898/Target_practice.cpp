#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int points = 0;
        for(int i=1;i<=10;i++){
            string s;
            cin>>s;
            if(i==1 || i==10){
                for(int j=0;j<10;j++){
                    if(s[j]=='X'){
                        points+=1;
                    }
                }
            }
            if(i==2 || i == 9){
                for(int j=0;j<10;j++){
                    if(j== 0 || j == 9){
                        if(s[j]=='X'){
                            points+=1;
                        }
                    }
                    else {
                        if(s[j]=='X'){
                            points+=2;
                        }
                    }
                }
            }
            if(i==3 || i==8){
                for(int j=0;j<10;j++){
                    if(j== 0 || j == 9){
                        if(s[j]=='X'){
                            points+=1;
                        }
                    }
                    else if(j == 1 || j==8){
                        if(s[j]=='X'){
                            points+=2;
                        }
                    }
                    else if(s[j]=='X'){
                        points+=3;
                    }
                }
            }
            if(i==4 || i==7){
                for(int j=0;j<10;j++){
                    if(j==0 || j == 9){
                        if(s[j]=='X'){
                            points+=1;
                        }
                    }
                    else if(j == 1 || j==8){
                        if(s[j]=='X'){
                            points+=2;
                        }
                    }
                    else if(j == 2 || j== 7){
                        if(s[j]=='X'){
                            points+=3;
                        }
                    }
                    else if(s[j]=='X'){
                        points+=4;
                    }
                }
            }
            if(i==5 || i==6){
                for(int j=0;j<10;j++){
                    if(j==0 || j == 9){
                        if(s[j]=='X'){
                            points+=1;
                        }
                    }
                    else if(j == 1 || j==8){
                        if(s[j]=='X'){
                            points+=2;
                        }
                    }
                    else if(j == 2 || j== 7){
                        if(s[j]=='X'){
                            points+=3;
                        }
                    }
                    else if(j == 3 || j== 6){
                        if(s[j]=='X'){
                            points+=4;
                        }
                    }
                    else if(s[j]=='X'){
                        points+=5;
                    }
                }
            }
        }
        cout<<points<<endl;
    }

}