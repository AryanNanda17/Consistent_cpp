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
        Node *next = node->next; 
        delete (node); 
        node  = next; 
    } 
} 
void deleteEveryNth(Node* head, int n) {
    if (head == nullptr || n <= 0) return;
    Node* curr = head;
    Node* prev = nullptr;
    if(n==1){
        freeList(head);
        return;
    }
    while (curr->next != curr) {
        for (int i = 0; i < n - 1; ++i) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        Node* temp = curr;
        curr = curr->next;
        temp->next = nullptr;
        cout << temp->data << " ";
        delete temp;
        if (curr == head) {
            head = prev->next;
        }
    }
    cout << curr->data << endl;
    delete curr;
}

int main() {
    Node* head = takeInput();
    int n;
    cin>>n;
    deleteEveryNth(head, n);
    return 0;
}