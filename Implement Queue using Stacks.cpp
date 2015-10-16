class Queue {
public:
    // Push element x to the back of queue.
    void push(int x) {
        m_stack.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        stack<int> temp_stack;
        int temp_value;
        while(!m_stack.empty())
        {
            temp_value=m_stack.top();
            m_stack.pop();
            temp_stack.push(temp_value);
        }
        temp_stack.pop();
        while(!temp_stack.empty())
        {
            temp_value=temp_stack.top();
            temp_stack.pop();
            m_stack.push(temp_value);
        }
    }

    // Get the front element.
    int peek(void) {
                stack<int> temp_stack;
        int result=0;
        int temp_value;
        while(!m_stack.empty())
        {
            temp_value=m_stack.top();
            m_stack.pop();
            temp_stack.push(temp_value);
        }
        result=temp_stack.top();
        while(!temp_stack.empty())
        {
            temp_value=temp_stack.top();
            temp_stack.pop();
            m_stack.push(temp_value);
        }
        return result;
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return m_stack.empty();
    }
    stack<int> m_stack;
};