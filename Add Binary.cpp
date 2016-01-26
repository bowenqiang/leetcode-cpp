class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        if(a.length()>b.length())
        {
            int steps=a.length()-b.length();
            for(int i=0;i<steps;i++)
            {
                b+='0';
            }
        }
        else
        {
            int steps=b.length()-a.length();
            for(int i=0;i<steps;i++)
            {
                a+='0';
            }
        }
        int length=a.length();
        string res;
        char c='0';
        for(int i=0;i<length;i++)
        {
            res+=(((a[i]-'0')+(b[i]-'0')+(c-'0'))%2+'0');
            c=((a[i]-'0')+(b[i]-'0')+(c-'0'))/2+'0';
        }
        if(c!='0')
            res+=c;
        reverse(res.begin(),res.end());
        return res;
        
    }


};
