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
    ListListListListListNode* deleteDuplicates(ListListListListListNode* head) {
    if(head==NULL || head ->next==NULL){
        return head;
    }
    ListListListListListNode* temp1=head ->next;
    ListListListListListNode* temp2=NULL;
    if(head ->val==temp1 ->val){
        head ->next=temp1 ->next;
        delete temp1;
       temp2= deleteDuplicates(head);
        return temp2;
    }
    else{
        temp2= deleteDuplicates(head ->next);
        head ->next=temp2;
        return head;
    }
    }
};