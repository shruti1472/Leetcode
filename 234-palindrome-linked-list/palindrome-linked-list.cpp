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
    bool isPalindrome(ListNode* head) {
       
       if(head==nullptr || head->next==nullptr){
        return true;
       }


       
    // ListNode* dummy = new ListNode(-1);
    // ListNode* tail = dummy;
    // ListNode* temp=head;

    // while (temp != nullptr) {
    //     tail->next = new ListNode(temp->val);
    //     tail = tail->next;
    //     temp = temp->next;
    // }
      
    // ListNode* newHead=dummy->next;

    //    ListNode* prev=nullptr;
    //    ListNode* curr=head;
    //    while(head!=nullptr){
    //     head=head->next;
    //     curr->next=prev;
    //     prev=curr;
    //     curr=head;
    //    }
        
    //    while(prev!=nullptr && newHead!=nullptr){
    //     if(prev->val!=newHead->val) return false;
    //     prev=prev->next;
    //     newHead=newHead->next;
    //    }

    ListNode* slow=head;
    ListNode* fast=head;
    while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }

    ListNode* prev=nullptr;
    ListNode* curr=slow->next;
    slow=slow->next;
    while(slow){
        slow=slow->next;
        curr->next=prev;
        prev=curr;
        curr=slow;
    }

    while(prev){
        if(head->val!=prev->val) return false;
        head=head->next;
        prev=prev->next;
    }

       return true;
      

    }
};