class Pair{
    public:
    ListNode* head;
    ListNode* tail;
};
Pair reverse(ListNode* head){
    if(head==NULL || head ->next==NULL){
        Pair ans;
        ans.head=head;
        ans.tail=head;
        return ans;
    }
    Pair smallans=reverse(head ->next);
    smallans.tail ->next=head;
    head ->next=NULL;
    smallans.tail=head;
    return smallans;
}

class Solution {
public:

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head ->next==NULL || k==0 || k==1){
        return head;
    }
    int count=1;
    ListNode* head1=head;
    ListNode* tail1=head;
    while(count!=k && tail1 ->next!=NULL){
        tail1=tail1 ->next;
        count++;    
    }
    ListNode* head2=tail1 ->next;
    tail1 ->next=NULL;
    Pair smallans=reverse(head1);
    head1=smallans.head;
    tail1=smallans.tail;
    head2=kReverse(head2,k);
    tail1 ->next=head2;
    return head1;
    }
};