class Solution {
public:
    string convertToTitle(int n) {
        string str;
        if(n<0)
            return str;
        while(n/26!=0)
        {
            if(n%26==0)
            {
                str.push_back('Z');
                n=n/27;
            }
            else
            {
                str.push_back(n%26+'A'-1);
                n=n/26;
            }
        }
        if(n!=0)
        {
            str.push_back('A'+n-1);
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
