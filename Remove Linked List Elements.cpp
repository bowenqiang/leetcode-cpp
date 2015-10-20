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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *p,*q;
        p=head;
        if(p==NULL)
            return p;
        q=p->next;
        while(q!=NULL)
        {
            //q=p->next;
            if(q->val==val)
            {
                p->next=q->next;
                q=p->next;
            }
            else
            {
                p=q;
                q=q->next;
            }
        }
        
        if(head->val==val)
            head=head->next;
        
        return head;
        
    }
};