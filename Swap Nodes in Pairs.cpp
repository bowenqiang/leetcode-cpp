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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode *p,*q,*temp;
        p=head;
        q=head->next;
        temp=q->next;
        q->next=p;
        p->next=swapPairs(temp);
        return q;
    }
};
