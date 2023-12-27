#include<iostream>
#include<climits>
using namespace std;
class stackusingarray{
int *data;
int nextindex;
int capacity;
    public:
stackusingarray(){
    data=new int[5];
    nextindex=0;
    capacity=5;
}

int size(){
    return nextindex;
}
bool isEmpty(){
    return nextindex==0; 
}
void push(int element){
    if(nextindex==capacity){
        int *newdata=new int[2*capacity];
        for(int i=0;i<capacity;i++){
            newdata[i]=data[i];
        }
        delete [] data;
        data=newdata;
        capacity=2*capacity;
    }
    data[nextindex]=element;
    nextindex++;
}
int pop(){
    if(isEmpty()){
        cout<<"Stack is Empty"<<endl;
        return INT_MIN;
    }
    nextindex--;
    return data[nextindex];
}
int top(){
  if(isEmpty()){
        cout<<"Stack is Empty"<<endl;
        return INT_MIN;
    }
    return data[nextindex-1];
}

};

int priority(char i){
    switch(i){
        case '+':
        case '-': 
            return 1;
            break;
        case '*':
        case '/':
            return 2;
            break;
        default:
            return -1;
            break;
    }
}

int main(){
    stackusingarray s1;
    string infix;
    cout<<"Enter the infix Expression: "<<endl;
    cin>>infix;
    string postfix;
    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];
        if (c >= 'a' && c <= 'z')
            postfix += c;
        else if (c == '(')
            s1.push('(');
        else if (c == ')') {
            while (s1.top() != '(') {
                postfix += s1.top();
                s1.pop();
            }
            s1.pop();
            continue;
        }
        else {
            while (!s1.isEmpty() && priority(infix[i]) <= priority(s1.top())) {
                postfix += s1.top();
                s1.pop();
            }
            s1.push(c);
        }
    }
    while (!s1.isEmpty()) {
        postfix += s1.top();
        s1.pop();
    }
    cout << "The Postfix Expression is: "<<postfix << endl;

}

/////////// Sample Test Cases ////////////
/*
 Input -> a-b/c*d+e
 Expected Output -> abc/d*-e+

 Input -> a+b/c
 Expected Output -> abc/+

*/