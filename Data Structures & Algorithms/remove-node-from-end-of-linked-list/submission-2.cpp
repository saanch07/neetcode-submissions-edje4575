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
        int total=0;
        ListNode* temp=head;
        vector<ListNode*> nodes;
        while(temp!=nullptr)
        {
            nodes.push_back(temp);
            temp=temp->next;
        }
        int removal=nodes.size()-n;
        if(removal==0)
        return head->next;
        nodes[removal-1]->next=nodes[removal]->next;
        return head;

        
    }
};
