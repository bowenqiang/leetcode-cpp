/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr,*next;
        curr=head;
        next=curr;
        if(curr==NULL)
            return curr;
        if(curr->next==NULL)
        {
            return NULL;
        }
        for(int i=0;i<n;i++)
        {
            next=next->next;
        }
        if(next==NULL)
        {
            head=head->next;
            return head;
        }
        while(next->next!=NULL)
        {
            curr=curr->next;
            next=next->next;
        }
            curr->next=(curr->next)->next;
        return head;
        
        
    }
};