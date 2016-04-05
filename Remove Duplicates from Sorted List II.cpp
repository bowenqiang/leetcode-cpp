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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *a,*b,*c;
        if(head==NULL)
            return NULL;
        ListNode temp(head->val+1);
        temp.next=head;
        head=&temp;
        a=head;
        b=a->next;
        c=b->next;
        bool flag=true;
        while(c!=NULL)
        {
            if(b->val!=c->val)
            {
                if(flag)
                {
                   a->next=b;
                   a=b;
                   b=c;
                   c=c->next;
                   //flag=false;
                }
                else
                {
                b=c;
                c=c->next;
                flag=true;
                }
                
            }
            else
            {
                c=c->next;
                flag=false;
            }
        }
        if(!flag)
        {
            a->next=NULL;
        }
        else
        {
            a->next=b;
        }
        return head->next;
    }
};
