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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
        {return true;}
        ListNode *fast,*slow;
        fast=head;
        slow=head;
        while(fast && fast->next)
        {
            fast=(fast->next)->next;
            slow=slow->next;
        }
        if(fast)
        {slow=slow->next;}
        slow=ReverseList(slow);
        while(slow)
        {
            if(head->val!=slow->val)
                return false;
            head=head->next;
            slow=slow->next;
        }
        
        return true;
    }
    ListNode* ReverseList(ListNode* head)
    {
        if(!head || !head->next)
        {return head;}
        ListNode *p,*q,*temp;
        p=head;
        q=head->next;
        temp=q->next;
        q->next=p;
        p->next=NULL;
        p=q;
        q=temp;
        while(q)
        {
            temp=q->next;
            q->next=p;
            p=q;
            q=temp;
        }
        return p;
    }
};
