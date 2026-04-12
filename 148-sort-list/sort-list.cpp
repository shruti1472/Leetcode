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
   ListNode* merge(ListNode* l1,ListNode* l2){
    ListNode* temp1=l1;
    ListNode* temp2=l2;
    ListNode* dummy = new ListNode(-1);
    ListNode* temp=dummy;
    while(temp1 && temp2){
        if(temp1->val < temp2->val){
            temp->next=temp1;
            temp1=temp1->next;
        }
        else{
            temp->next=temp2;
            temp2=temp2->next;
        }
        temp=temp->next;
    }
    while(temp1){
        temp->next=temp1;
        temp=temp->next;
        temp1=temp1->next;
    }
    while(temp2){
        temp->next=temp2;
        temp=temp->next;
        temp2=temp2->next;
    }
    return dummy->next;
}

ListNode* sortList(ListNode* head){
    if(head==nullptr || head->next==nullptr) return head;
    ListNode* slow=head;
    ListNode* fast=head->next;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* mid = slow->next;
    slow->next = nullptr;
    ListNode* left=sortList(head);
    ListNode* right=sortList(mid);
    ListNode* sorted=merge(left,right);
    return sorted;
}
};