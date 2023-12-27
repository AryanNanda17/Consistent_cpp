
#include<iostream>
#include<climits>
using namespace std;
class stackusingarray{
int *data;
int nextindex;
int capacity;
    public:
stackusingarray(int s){
    data=new int[s];
    nextindex=0;
    capacity=s;
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

int main(){
    stackusingarray s1(5);
    s1.push(1);           
    s1.push(2);           
    s1.push(3);           
    s1.push(4);           
    s1.push(5);           
    s1.push(6);           
    s1.push(7);           
    s1.push(8);           
    s1.push(9);           
    s1.push(10);
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.isEmpty()<<endl;

}

