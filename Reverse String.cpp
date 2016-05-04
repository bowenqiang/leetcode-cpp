class Solution {
public:
    string reverseString(string s) {
        stack<char> mystack;
        for(int i=0;i<s.size();i++)
        {
            mystack.push(s[i]);
        }
        string ans;
        while(!mystack.empty())
        {
            ans+=mystack.top();
            mystack.pop();
        }
        return ans;
    }
};
