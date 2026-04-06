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
    void reorderList(ListNode* head) {
        vector<int> rev;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            rev.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>org=rev;
        reverse(rev.begin(),rev.end());
        temp=head;
        int i=0,j=0;
        //[8,6,4,2]
        //[2,4,6,8]
        // 0,1,2,3.  2,8,6,

        //2,4,6,8. i=0
        //8,6,4,2
        int n=0;
        while(temp!=nullptr)
        {
            if(n%2==0)
            {
                temp->val=org[i];
                i++;
            }
            else
            {
                temp->val=rev[j];
                j++;
            }
            

            temp=temp->next;
            n++;
        
            
        }
 
        
    }
};
