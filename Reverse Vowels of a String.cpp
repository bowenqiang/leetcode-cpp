class Solution {
public:
    string reverseVowels(string s) {
        stack<char> mystack;
        for(int i=0;i<s.size();i++)
        {
            if(isVowel(s[i]))
            {
                mystack.push(s[i]);
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(isVowel(s[i]))
            {
                s[i]=mystack.top();
                mystack.pop();
            }
        }
        return s;
        
    }
    bool isVowel(char s)
    {
        if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u' || s=='A' || s=='E' || s=='I' || s=='O' || s=='U')
        {
            return true;
        }
        return false;
    }
};
