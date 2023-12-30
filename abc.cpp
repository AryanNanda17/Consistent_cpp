#include<iostream>
using namespace std;
class edge{
    public:
    int data;
    edge*next;
    edge(int data){
        this->data=data;
        next = NULL;
    }
};
class Node{
    public:
    int val;
    edge* head;
    edge*tail;
    Node*next;
    Node(int val){
        this->val = val;
        head = NULL;
        tail = NULL;
        next = NULL;
    }
    void addEdge(edge* v){
        if(head==NULL){
            head = v;
            tail=v;
            return;
        }
        tail->next = v;
        tail = v;
    }
};
class graph{
    public:
    Node* source;
    Node* end;
    graph(){
        source = NULL;
        end = NULL;
    }
    void addNode(){
        cout<<"Enter the node data "<<endl;
        int a;
        cin>>a;
        Node* n = new Node(a);
        if(source==NULL){
            source = n;
            end = n;
        }
        end->next = n;
        end = n;
        cout<<"Enter the number of edges"<<endl;
        int e;
        cin>>e;
        while(e--){
            cout<<"Enter the edge value"<<endl;
            int value;
            cin>>value;
            edge* newedge = new edge(value);
            n->addEdge(newedge);
        }
    }
};


int main(){

}