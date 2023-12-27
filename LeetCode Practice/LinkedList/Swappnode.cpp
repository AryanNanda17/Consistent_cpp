class Solution {
public:
    ListListNode* swapListListNodes(ListListNode* head, int k) {
        int i = k;
        int j = len(head)-k;
    if(head==NULL || i==j){
        return head;
    }
    int a=0;
    int b=0;
    ListListNode* cur1=head;
    ListListNode* cur2=head;
    ListListNode* pre1=NULL;
    ListListNode* pre2=NULL;
    if(i==0){
        while(b<j && cur2!=NULL){
            pre2=cur2;
            cur2=cur2->next;
            b++;
        }
        ListListNode* temp1=cur1 ->next;
        cur1 ->next=cur2 ->next;
        cur2 ->next=temp1;
        pre2 ->next=head;
        head=cur2;
        return head;
    }
    if(j==0){
        while(a<i && cur1!=NULL){
        pre1=cur1;
        cur1=cur1 ->next;
        a++;
        }
        ListListNode* temp1=cur1 ->next;
        cur1 ->next=cur2 ->next;
        cur2 ->next=temp1;
        pre1 ->next=head;
        head=cur1;
        return head;
    }
    while(a<i && cur1!=NULL){
        pre1=cur1;
        cur1=cur1 ->next;
        a++;
    }
    while(b<j && cur2!=NULL){
        pre2=cur2;
        cur2=cur2->next;
        b++;
    }
    ListListNode* temp1=pre1 ->next;
    pre1 ->next=pre2 ->next;
    pre2 ->next=temp1;
    temp1=cur1 ->next;
    cur1 ->next=cur2 ->next;
    cur2 ->next=temp1;
    return head;
    }
};