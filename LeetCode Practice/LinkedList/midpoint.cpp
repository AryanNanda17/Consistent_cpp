class Solution {
public:
    ListListListListListNode* middleListListListListNode(ListListListListListNode* head) {
    if(head==NULL){
        return head;
    }
    ListListListListListNode* slow=head ;
    ListListListListListNode* fast=head ->next;
    while(fast!=NULL ){
        slow=slow ->next;
        if(fast->next==NULL)break;
        fast=fast ->next ->next;
    }
    return slow;
    }
};