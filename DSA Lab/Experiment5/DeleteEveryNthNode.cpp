#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

Node* takeInput() {
    int data;
    cin >> data;
    Node* head = nullptr;
    Node* tail = nullptr;

    while (data != -1) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }

    if (tail != nullptr) {
        tail->next = head; 
    }
    return head;
}
int countNodes(Node* head)
{
    Node* temp = head;
    int result = 0;
    if (head != NULL) {
        do {
            temp = temp->next;
            result++;
        } while (temp != head);
    }

    return result;
}
void printList(Node* head) {
    if (head == nullptr) return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}
void freeList(Node *node) 
{ 
    int a = countNodes(node);
    while (a--) 
    { 

        cout<<node ->data<<" ";
        Node* temp = node;
        Node *next = node->next; 
        temp->next = NULL;
        delete temp;
        node  = next; 
    } 
} 
void deleteEveryNthNode(Node* head, int n){
    if(head==NULL || n==0)return;
    Node* cur = head;
    Node* prev = NULL;
    if(n==1){
        freeList(head);
        return;
    }
    while(cur->next != cur){
        for (int i = 0; i < n - 1; ++i) {
            prev = cur;
            cur = cur->next;
        }
        prev->next = cur->next;
        Node* temp = cur;
        cur = cur->next;
        temp->next = NULL;
        cout<<temp->data<<" ";
        delete temp;
    }
    cout << cur->data << endl;
    delete cur;
}
int main() {
    Node* head = takeInput();
    int n;
    cin>>n;
    deleteEveryNthNode(head, n);
    return 0;
}