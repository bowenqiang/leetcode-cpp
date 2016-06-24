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
    ListNode* partition(ListNode* head, int x) {
        ListNode headSmall(-1),headBig(-1),*small,*big,*dummy;
        small=&headSmall;
        big=&headBig;
        dummy=head;
        for(;dummy;dummy=dummy->next)
        {
            if(dummy->val<x)
            {
                small->next=dummy;
                small=small->next;
            }
            else
            {
                big->next=dummy;
                big=big->next;
            }
        }
        small->next=headBig.next;
        big->next=NULL;
        return headSmall.next;
        
    }
};
