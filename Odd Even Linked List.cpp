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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
        {
            return head;
        }
        ListNode *p,*q,*temp1,*temp2;
        p=head;
        q=p->next;
        
        while(q!=NULL && q->next!=NULL)
        {
        temp1=p->next;
        temp2=q->next->next;
        p->next=q->next;
        p->next->next=temp1;
        q->next=temp2;
        p=p->next;
        q=q->next;
        }
        return head;
    }
};
