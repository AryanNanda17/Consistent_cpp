ListListListListNode *mergeTwoSortedLinkedLists(ListListListListNode *head1, ListListListListNode *head2)
{
    if(head1==NULL ){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    ListListListListNode* fh=NULL;
    ListListListListNode* ft=NULL;
    if(head1 ->val<head2 ->val){
        fh=head1;
        ft=head1;
        head1=head1 ->next;
    }
    else{
        fh=head2;
        ft=head2;
        head2=head2 ->next;
    }
    while(head1!=NULL && head2!=NULL){
        if(head1->val<head2 ->val){
            ft->next=head1;
            ft=ft ->next;
            head1=head1 ->next;
        }
        else{
            ft ->next=head2;
            ft=ft ->next;
            head2=head2 ->next;
        }
    }
    if(head1!=NULL){
        ft ->next=head1;
    }
    else{
        ft ->next=head2;
    }
    return fh;
}
ListListListListNode *mergeSort(ListListListListNode *head)
{
    if(head==NULL || head ->next==NULL){
        return head;
    }
    ListListListListNode* slow=head;
    ListListListListNode* fast=head ->next;
    while(fast!=NULL && fast ->next!=NULL){
        slow=slow ->next;
        fast=fast ->next ->next;
    }
    ListListListListNode* temp=slow ->next;
    slow ->next=NULL;
    head=mergeSort(head);
    temp=mergeSort(temp);
    head= mergeTwoSortedLinkedLists(head,temp);
    return head;
}