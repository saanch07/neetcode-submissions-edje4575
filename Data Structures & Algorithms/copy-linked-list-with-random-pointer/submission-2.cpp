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
        unordered_map<Node*,Node*>mp;
        Node* temp=head;
        if(head==nullptr)
        return head;
        while(temp!=nullptr)
        {
            Node* t=new Node(temp->val);
            t->next=temp->next;
            temp->next=t;
            temp=t->next;
        }
        temp=head;
        while(temp!=nullptr)
        {
            if (temp->random != nullptr) 
            temp->next->random=temp->random->next;

            temp=temp->next->next;
        }
        temp=head;
        Node* newHead=head->next;
        while(temp!=nullptr)
        {
            Node* l2=temp->next;
            temp->next=l2->next;
            if(l2->next!=nullptr)
            l2->next=l2->next->next;
            temp=temp->next;

        }

        return newHead;
        
    }
};
