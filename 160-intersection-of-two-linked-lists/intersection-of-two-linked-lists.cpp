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
        int countA=0;
        while(temp1!=nullptr){
            countA++;
            temp1=temp1->next;
        } 
        ListNode* temp2=headB;
        int countB=0;
        while(temp2!=nullptr){
            countB++;
            temp2=temp2->next;
        }
        int skip=0;
         temp1=headA;
         temp2=headB;
        if(countA>countB){
        skip=countA-countB;
       
        while(skip){
            temp1=temp1->next;
            skip--;
        }
        }
        else{
        skip=countB-countA;
        while(skip){
            temp2=temp2->next;
            skip--;
        }
        }
        while(temp1!=nullptr && temp2!=nullptr){
            if(temp1==temp2) return temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        return nullptr;
    }
};