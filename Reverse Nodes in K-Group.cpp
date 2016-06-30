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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k<2)
            return head;
        ListNode dummy(-1);
        dummy.next=head;
        for(ListNode *prev=&dummy,*end=head;end;end=prev->next)
        {
            for(int i=1;i<k && end;i++)
            {
                end=end->next;
            }
            if(end==NULL)
                break;
            prev=reverse(prev,prev->next,end);
        }
        return dummy.next;
    }
    ListNode* reverse(ListNode* prev,ListNode* begin,ListNode* end)
    {
        ListNode *endNext=end->next;
        for(ListNode *p=begin,*cur=p->next,*next=cur->next;cur!=endNext;p=cur,cur=next,next=next?next->next:NULL)
        {
            cur->next=p;
        }
        prev->next=end;
        begin->next=endNext;
        return begin;
    }
    
};
