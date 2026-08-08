/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* temp=head;
        while(temp!=NULL){
            size=size+1;
            temp=temp->next;
        }
        if(n==size){
            head=head->next;
            return head;
        }
        int m=size-n+1;
        int index=m-1;
        temp=head;
        for(int i=0;i<index-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};