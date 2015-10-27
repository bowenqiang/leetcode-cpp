class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0)
        {return false;}
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
                continue;
            }
            if(st.top()=='(' && s[i]==')')
            {
                st.pop();
                continue;
            }
            if(st.top()=='[' && s[i]==']')
            {
                st.pop();
                continue;
            }
            if(st.top()=='{' && s[i]=='}')
            {
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        return st.empty();
    }
};
