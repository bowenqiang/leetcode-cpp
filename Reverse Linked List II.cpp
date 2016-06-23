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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* dummy=head;
        for(int i=1;i<m;i++)
        {
            dummy=dummy->next;
        }
        for(int i=(n-m);i>=1;i--)
        {
            function(dummy,i);
        }
        return head;
    }
    void function(ListNode* head,int k)
    {
        for(int i=1;i<=k;i++)
        {
            swap(head->val,head->next->val);
            head=head->next;
        }
    }
};
