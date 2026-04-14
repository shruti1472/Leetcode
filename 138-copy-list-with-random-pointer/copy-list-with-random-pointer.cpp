/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node* temp=head;
        while(temp!=nullptr){
            Node* newNode=new Node(temp->val);
            newNode->next=temp->next;
            temp->next=newNode;
            temp=temp->next->next;
        }
        temp=head;
        while(temp!=nullptr){
            if(temp->random!=nullptr){
           temp->next->random=temp->random->next;
            }
            else{
                temp->next->random=nullptr;
            }
           temp=temp->next->next;
        }
        Node* dummy=new Node(-1);
        Node* dummy1=dummy;
        temp=head;
        while(temp!=nullptr){
            Node* connected=temp->next;
            dummy1->next=connected;
            temp->next=connected->next;
            temp=temp->next;
            dummy1=dummy1->next;
        }
        return dummy->next;
    }
};