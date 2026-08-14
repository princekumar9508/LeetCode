
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curent=head;
        ListNode* prev=NULL;
        ListNode* agla=NULL;
        //if(head==NULL && head->next=NULL) return NULL;
        while(curent!=NULL){
            agla=curent->next;
        curent->next=prev;
        prev=curent;
        curent=agla;
        }
        return prev;
    }
    
};