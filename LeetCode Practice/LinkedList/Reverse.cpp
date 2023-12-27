/**
 * Definition for singly-linked list.
 * struct ListListListListListNode {
 *     int val;
 *     ListListListListListNode *next;
 *     ListListListListListNode() : val(0), next(nullptr) {}
 *     ListListListListListNode(int x) : val(x), next(nullptr) {}
 *     ListListListListListNode(int x, ListListListListListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListListListListListNode* reverseList(ListListListListListNode* head) {
    if(head==NULL || head ->next==NULL){
        return head;
    }
    ListListListListListNode* newhead=reverseList(head ->next);
    ListListListListListNode* temp=newhead;
    while(temp ->next!=NULL){
        temp=temp ->next;
    }
    temp ->next=head;
    head ->next=NULL;
    return newhead;
    }
};