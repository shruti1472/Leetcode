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

    ListNode* getkthNode(ListNode* temp,int k){
        k=k-1;
        while(temp!=nullptr && k>0){
             temp=temp->next;
             k--;
        }
        return temp;
    }

    ListNode* reverseLL(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prev=nullptr;
        while(temp!=nullptr){
            ListNode* kthNode=getkthNode(temp,k);
            if(kthNode==nullptr){
                if(prev)prev->next=temp;
                break;
            }
            ListNode* nextNode=kthNode->next;
            kthNode->next=nullptr;
           ListNode* newHead= reverseLL(temp);
            if(temp==head){
                head=kthNode;
            }
            else{
                prev->next=kthNode;
            }
            prev=temp;
            temp=nextNode;
        }
        return head;
    }
};