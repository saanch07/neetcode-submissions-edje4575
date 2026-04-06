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
        vector<ListNode*> node;
        while(temp!=nullptr)
        {
            total++;
            temp=temp->next;
        }
        int removal=total-n;
        if(removal==0)
        return head->next;
int i=0;
       
        temp=head;
        while(temp!=nullptr)
        {
            if(i==removal-1)
           {
            temp->next=temp->next->next;
            break;

           } 
           i++;
            temp=temp->next;

        }
        return head;
        
    }
};
