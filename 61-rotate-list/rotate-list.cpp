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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr || k==0) return head;
         
        ListNode* temp=head;
        int n=0;
        while(temp!=nullptr){
            n++;
            temp=temp->next;
        }
        k=k%n;
         if(k == 0) return head;
        k=n-k-1;
        ListNode* kthnode=head;
        while( k>0){
            kthnode=kthnode->next;
            k--;
        }
       
        ListNode* nextnode=kthnode->next;
        kthnode->next=nullptr;
        ListNode* head1=reverseLL(head);
        ListNode* head2=reverseLL(nextnode);
        head->next=head2;
        return reverseLL(head1);
        
    }
};