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
        ListNode* temp=head;
        int cnt=0;
        while(temp!=nullptr){
            cnt++;
            temp=temp->next;
        }
        if(cnt==n){
            ListNode* newhead=head->next;
            delete head;
            return newhead;

        }
        temp=head;
        int index=cnt-n;
        int i =1;
        while(temp!=nullptr && i<index){
            temp=temp->next;
            i++;
        }
        ListNode* delnode=temp->next;
        temp->next=delnode->next;
        delete delnode;
        return head;
    }
};