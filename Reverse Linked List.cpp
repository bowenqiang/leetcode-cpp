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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *p,*q;
        p=head;
        q=head->next;
        p->next=NULL;

        ListNode* temp;
        while(q!=NULL)
        {
            temp=q->next;
            q->next=p;
            p=q;
            q=temp;
        }
        return p;
        }
};