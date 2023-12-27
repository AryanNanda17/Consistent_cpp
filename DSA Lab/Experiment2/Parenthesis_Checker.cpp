#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string expression) 
{   stack<char> s;
    for(int i=0;i<expression.size();i++){
        if(expression[i]=='(' || expression[i]=='[' || expression[i]=='{'){
            s.push(expression[i]);
        }
        else if(expression[i]==')'){
            if(i==0){
                return false;
            }
            if(s.empty()){
                 return false;
            }
            if(s.top()=='('){
                s.pop();
            }
            else{
                return false;
            }
        }
        else if(expression[i]==']'){
            if(i==0){
                return false;
            }
            if(s.empty()){
                return false;
            }
            if(s.top()=='['){
                s.pop();
            }
            else{
                return false;
            }
        }
        else if(expression[i]=='}'){
            if(i==0){
                return false;
            }
            if(s.empty()){
                return false;
            }
            if(s.top()=='{'){
                s.pop();
            }
            else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}

//--------------------Sample Test Case---------------
/*

- )()()(
- ()((())())

*/