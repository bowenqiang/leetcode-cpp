struct LinkedList
{
    int val;
    LinkedList* next;
};

class MinStack {
public:
    LinkedList *head,*last;
    int min=INT_MAX;
    MinStack()
    {
        head=new LinkedList;
        head->val=NULL;
        head->next=NULL;
        last=head;
    }

    void push(int x) {
        last->val=x;
        LinkedList *p;
        p=new LinkedList;
        p->val=NULL;
        p->next=NULL;
        last->next=p;
        last=p;
        min=min<x?min:x;
       
    }

    void pop() {
        LinkedList *p;
        p=head;
        if(p->next==NULL)
        {
            break;
        }
        while(!p->next->next->next==NULL)
        {
            p=p->next;
        }
        p->next->next=NULL;
        p->next->val=NULL;
        
        
    }

    int top() {
        LinkedList *p;
        p=head;
        if(p->next==NULL)
            return 0;
        while(!p->next->next==NULL)
        {
            p=p->next;
        }
        return p->val;
        
    }

    int getMin() {
        return min;
        
    }
};
