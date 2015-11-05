struct LinkedList
{
	int val;
	LinkedList* next;
};

class MinStack {
public:
	LinkedList *head, *last;
	int min = INT_MAX;
	MinStack()
	{
		head = new LinkedList;
		head->val = INT_MAX;
		head->next = NULL;
		last = head;
	}

	void push(int x) {
		LinkedList *p;
		p = new LinkedList;
		
		p->val = x+1-1;
		p->next = NULL;
		last->next = p;
		last = p;
		min = min<x ? min : x;

	}

	void pop() {
		LinkedList *p;
		p = head;
		if (p->next == NULL)
			return;
		min = p->val;
		while (p->next != last)
		{
			p = p->next;
			min = min < p->val ? min : p->val;
		}
		p->next = NULL;
		last = p;

		



	}

	int top() {
		return last->val;

	}

	int getMin() {
		return min;

	}
};