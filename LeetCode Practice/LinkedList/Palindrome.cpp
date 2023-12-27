/**
 * Definition for singly-linked list.
 * struct ListListListListListListNode {
 *     int val;
 *     ListListListListListListNode *next;
 *     ListListListListListListNode() : val(0), next(nullptr) {}
 *     ListListListListListListNode(int x) : val(x), next(nullptr) {}
 *     ListListListListListListNode(int x, ListListListListListListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListListListListListNode *reverse(ListListListListListNode *head)
{
    ListListListListListNode* prev=NULL,*curr=head,*temp=NULL;
        while(curr != NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
}

bool isPalindrome(ListListListListListNode* head) {
    if(head==NULL){
        return 1;
    }
    ListListListListListNode* slow=head;
    ListListListListListNode* fast=head ->next;
    while(fast!=NULL && fast ->next!=NULL){
        slow=slow ->next;
        fast=fast ->next ->next;
    }
    ListListListListListNode*newhead=slow ->next;
    slow ->next=NULL;
    newhead=reverse(newhead);
    ListListListListListNode* cmp1=head;
    ListListListListListNode* cmp2=newhead;
    while(cmp1!=NULL &&cmp2!=NULL){
        if(cmp1 ->val==cmp2 ->val){
            cmp1=cmp1->next;
            cmp2=cmp2 ->next;
            
        }
        else{
            return 0;
        }
        
    }
    //There is no problem in directly returning also 
    //But we should make our linked list back to normal 
    newhead=reverse(newhead);
    slow ->next=newhead;
    return 1;
    }
};