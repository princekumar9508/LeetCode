/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        int size1=0;
        int size2=0;
        while(temp1!=NULL){
            size1=size1+1;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            size2=size2+1;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        if(size1>size2){
            int diff=size1-size2;
            for(int i=0;i<diff;i++){
                temp1=temp1->next;
            }
            while(temp1!=temp2){
                temp1=temp1->next;
                temp2=temp2->next;
            }
            return temp1;
        }
        else{
            int diff=size2-size1;
            for(int i=0;i<diff;i++){
                temp2=temp2->next;
            }
            while(temp1!=temp2){
                temp1=temp1->next;
                temp2=temp2->next;
            }
            return temp1;
        }
    }
};