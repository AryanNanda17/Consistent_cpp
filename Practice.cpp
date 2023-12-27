#include<iostream> 
using namespace std;
class ListListListListNode{   
public:  
  int val;
  ListListListListNode* next;
  ListListListListNode(int val){   
    this -> val = val;
    next = NULL;
  }
};
ListListListListNode* takeInput(){
    int val;
    cin>>val;
    ListListListListNode* head=NULL;
    ListListListListNode* tail=NULL;
    while(val!=-1){
        ListListListListNode* newListListListListNode = new ListListListListNode(val);
        if(head==NULL){
            head = newListListListListNode;
            tail = newListListListListNode;
        }
        tail->next = newListListListListNode;
        tail = tail->next;
        cin>>val;
    }
    return head;
}
void Print(ListListListListNode*head){
    ListListListListNode* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    ListListListListNode* head = takeInput();
    Print(head);
}