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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* dummy=new ListNode(0);
        ListNode* temp3=dummy;
        int sum=0;
        int rem=0;
        while(temp1!=nullptr && temp2!=nullptr){
            sum=temp1->val+temp2->val;
            temp3->next=new ListNode((sum+rem)%10);
            rem=(sum+rem)/10;
            temp1=temp1->next;
            temp2=temp2->next;
            temp3=temp3->next;
        }
        while(temp1!=nullptr){
          sum=temp1->val;
          temp3->next=new ListNode((sum+rem)%10);
          rem=(sum+rem)/10;
          temp3=temp3->next;
          temp1=temp1->next;
        }
         while(temp2!=nullptr){
          sum=temp2->val;
          temp3->next=new ListNode((sum+rem)%10);
          rem=(sum+rem)/10;
          temp3=temp3->next;
          temp2=temp2->next;
        }
        if(rem!=0){
            temp3->next=new ListNode(rem);
        }
        return dummy->next;
    }
};