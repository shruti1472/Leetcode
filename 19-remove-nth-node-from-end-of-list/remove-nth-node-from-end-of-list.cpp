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
        if(head==nullptr){
            return head;
        }
        if(head->next==nullptr && n==1){
            ListNode* temp=head;
            delete temp;
            return nullptr;
        }
        ListNode* dummy=new ListNode(0,head);
        ListNode* fast=dummy;
        ListNode* slow=dummy;
        for(int i=0;i<n;i++)  fast=fast->next;

        while(fast->next!=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* delnode=slow->next;
        slow->next=delnode->next;
        delete delnode;
        return dummy->next;
    }
};