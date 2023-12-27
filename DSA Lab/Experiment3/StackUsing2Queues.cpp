#include<iostream>
using namespace std;

class queueusingarray{
    int *data;
    int nextindex;
    int firstindex;
    int size;
    int capacity;
    public:
    queueusingarray(){
        data=new int[5];
        nextindex=0;
        firstindex=-1;
        size=0;
        capacity=5;
    }
    int getsize(){
        return size;
    }
    bool isempty(){
        return size==0;
    }
    void enqueue(int element){
        if(size==capacity){
            int* newdata=new int[2*capacity];
            int j=0;
            for(int i=firstindex;i<capacity;i++,j++){
                newdata[j]=data[i];
             }
            for(int i=0;i<firstindex;i++,j++){
                newdata[j]=data[i];
            }
            delete [] data;
            data=newdata;
            firstindex=0;   
            nextindex=capacity;
            capacity=2*capacity;
        }
        data[nextindex]=element;
        nextindex=(nextindex+1)%capacity;
        size++;
        if(firstindex==-1){
            firstindex=0;
        }
    }
    int dequeue(){
        if(isempty()){
            cout<<"Queue is empty";
            return 0;
        }
        int ans=data[firstindex];
        firstindex=(firstindex+1)%capacity;
        size--;
        if(size==0){
            firstindex=-1;
            nextindex=0;
        }
        return ans;
    }
    int front(){
         if(isempty()){
             cout<<" Queue is empty";
            return 0;
        }
        return data[firstindex];
    }
};
class Stack{
    int N;
    queueusingarray q1;
    queueusingarray q2;
    public:
    Stack(){
        N = 0;
    }
    void push(int element){
        q2.enqueue(element);
        N++;
        while(!q1.isempty()){
            q2.enqueue(q1.front());
            q1.dequeue();
        }
        queueusingarray temp = q2;
        q2 = q1;
        q1 = temp;
    }
    void pop(){
        q1.dequeue();
        N--;
    }
    int top(){
        return q1.front();
    }
    int size(){
        return N;
    }
};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    cout<<s.size()<<endl;
    int size = s.size();
    for(int i=0;i<size;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
}
