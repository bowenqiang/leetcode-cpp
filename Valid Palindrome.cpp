class Solution {
public:
    bool isPalindrome(string s) {
        string target;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
                target.push_back(s[i]);
            if(s[i]>='A' && s[i]<='Z')
            {
                target.push_back('a'+(s[i]-'A'));
            }
            if(s[i]>='0' && s[i]<='9')
            {
                target.push_back(s[i]);
            }
        }
        if(target.empty())
            return true;
        cout<<target;
        int n=target.size();
        for(int i=0;i<n/2;i++)
        {
            if(target[i]!=target[n-1-i])
                return false;
        }
        return true;
    }
};
