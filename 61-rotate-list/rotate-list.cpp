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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* tail=NULL;
        int n=0;
        if(head==NULL || head->next==NULL){
            return head;
        }
        while(temp!=NULL){
            n=n+1;
            if(temp->next==NULL){
                tail=temp;
            }
            temp=temp->next;
        }
        temp=head;  
        k=k%n;
        if(k==0)return head;
        for(int i=1;i<n-k;i++){
            temp=temp->next;
        }
        ListNode* newhead=temp->next;
        temp->next=NULL;
        tail->next=head;
        return newhead;

    }
};