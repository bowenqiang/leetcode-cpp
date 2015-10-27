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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=ListLength(headA);
        int lenB=ListLength(headB);
        if(lenA>lenB)
        {
            for(int i=0;i<lenA-lenB;i++)
            {
                headA=headA->next;
            }
        }
        else
        {
            for(int i=0;i<lenB-lenA;i++)
            {
                headB=headB->next;
            }
        }
        
        while(headA!=headB)
        {
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
        
        
    }
    
    
    int ListLength(ListNode *head)
    {
        int length=0;
        while(head!=NULL)
        {
            length++;
            head=head->next;
        }
        return length;
    }
};
