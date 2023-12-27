class Solution {
public:
    ListListListListListNode* mergeTwoLists(ListListListListListNode* list1, ListListListListListNode* list2) {
    if(list1==NULL){
        return list2;
    }
    if(list2==NULL){
        return list1;
    }
    ListListListListListNode* fh=NULL;
    ListListListListListNode* ft=NULL;
    if(list1->val<list2 ->val){
        fh=list1;
        ft=list1;
        list1=list1->next;
    }
    else{
        fh=list2;
        ft=list2;
        list2=list2 ->next;
    }
    while(list1!=NULL && list2!=NULL){
        if(list1->val<list2 ->val){
            ft->next=list1;
            ft=ft ->next;
            list1=list1->next;
        }
        else{
            ft ->next=list2;
            ft=ft ->next;
            list2=list2 ->next;
        }
    }
    if(list1!=NULL){
        ft ->next=list1;
    }
    else{
        ft ->next=list2;
    }
    return fh;
    }
};