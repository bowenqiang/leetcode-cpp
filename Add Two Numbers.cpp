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
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *result,*p,*q;
		result = (ListNode*)malloc(sizeof(ListNode));
		result->val = 0;
		int carry;
		p = result;

		while (l1!=NULL || l2!=NULL)
		{
			if (l1 == NULL)
			{
				carry = (l2->val + p->val) / 10;
				p->val = (l2->val + p->val) % 10;
				l2 = l2->next;
			}
			else
				if (l2 == NULL)
				{
					carry = (l1->val + p->val) / 10;
					p->val = (l1->val + p->val) % 10;
					l1 = l1->next;
				}
				else
				{
					carry = (l1->val + l2->val + p->val) / 10;
					p->val = (l1->val + l2->val + p->val) % 10;
					l1 = l1->next;
			        l2 = l2->next;
				}

			q = (ListNode*)malloc(sizeof(ListNode));
			q->val = carry;
			q->next = p;  //not point to next, point to last
			p->next = q;

			p = q;
		}



		if (p->val == 0)
			(p->next)->next = NULL;
		else
			p->next = NULL;

		return result;
	}
};