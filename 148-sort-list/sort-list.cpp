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
    

    ListNode* sortList(ListNode* head) {
        vector<int>arr;
        int i=0;
        ListNode* temp=head;
        while(temp!=nullptr){
           arr.push_back(temp->val);
            temp=temp->next;
            i++;
        }
        sort(arr.begin(),arr.end());
       int j=0;
        temp=head;
        while(temp!=nullptr){
            temp->val=arr[j];
            j++;
            temp=temp->next;
        }
        return head;
    }

};