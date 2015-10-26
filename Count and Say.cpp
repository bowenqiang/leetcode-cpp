class Solution {
public:
    string countAndSay(int n) {
        string str="1";
        if(n<=0)
            return string();
        for(int i=1;i<n;i++)
        {
            str=translate(str);
        }
        
        return str;
    }
    string translate(string str)
    {
        int counter=0;
        char last=str[0];
        stringstream ss;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]==last)
            {
                counter++;
            }
            else
            {
                ss<<counter<<last;
                last=str[i];
                counter=1;
            }
        }
        ss<<counter<<last;
        return ss.str();
        
    }
};