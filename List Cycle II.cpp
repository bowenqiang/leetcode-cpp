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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
        {
            return NULL;
        }
            ListNode *fast,*slow;
            fast=head;
            slow=head;
            do
            {
                if(fast->next==NULL || fast->next->next==NULL)
                    return NULL;
                fast=fast->next->next;
                slow=slow->next;
            }while(fast!=slow);
        slow=head;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
        
    }
};
