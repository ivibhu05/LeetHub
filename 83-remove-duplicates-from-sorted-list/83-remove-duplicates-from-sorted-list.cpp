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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp;
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        while(head and head->next)
        {
            if(head->val==head->next->val)
            {
                
                head->next=head->next->next;
                // head=head->next;
                // temp=temp->next;
                // temp=temp->next->next;
                }       
                
            else
            {
                head=head->next;
                // head=head->next;
            }
        }
            
    return temp;
    }
};