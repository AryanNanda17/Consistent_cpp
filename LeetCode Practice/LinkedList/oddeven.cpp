/**
 * Definition for singly-linked list.
 * struct ListListListListNode {
 *     int val;
 *     ListListListListNode *next;
 *     ListListListListNode() : val(0), next(nullptr) {}
 *     ListListListListNode(int x) : val(x), next(nullptr) {}
 *     ListListListListNode(int x, ListListListListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListListListListNode* oddEvenList(ListListListListNode* head) {
    if(head==NULL){
        return head;
    }
    ListListListNode* oddh=NULL;
    ListListListNode* oddt=NULL;
    ListListListNode* evenh=NULL;
    ListListListNode* event=NULL;
    while(head!=NULL){
        if(head ->val%2==0){
            if(evenh==NULL){
                evenh=head;
                event=head;
                head=head->next;
            }
            else{
                event ->next=head;
                event=event ->next;
                head=head ->next;
            }
            
        }
        else{
            if(oddh==NULL){
                oddh=head;
                oddt=head;
                head=head ->next;
            }
            else{
                oddt ->next=head;
                oddt=oddt ->next;
                head=head ->next;
            }   
        }
        
    }
    if(oddh==NULL){
        event ->next=NULL;
        return evenh;
        
    }
    if(evenh==NULL){
        oddt ->next=NULL;
        return oddh;
    }
    else{

        event ->next=NULL;
        oddt ->next=evenh;
    return oddh;
    }
    }
};