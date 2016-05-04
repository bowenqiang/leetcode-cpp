class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
        st.push(x);
        if(stm.empty() || x<=stm.top())
        {
            stm.push(x);
        }
    }
    
    void pop() {
        if(st.top()==stm.top())
        {
            stm.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return stm.top();
    }
private:
    stack<int> st;
    stack<int> stm;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
