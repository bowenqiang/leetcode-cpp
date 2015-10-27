class Solution {
public:
    int myAtoi(string str) {
        if(str.empty())
        {return 0;}
        int result=0;
        int sign=1;
        bool flag0=true,flag1=true;
        for(int i=0;i<str.size();i++)
        {
            if(flag0)
            {
                if(str[i]==' ')
                {
                    continue;
                }
                else
                {
                    if(str[i]=='-')
                    {sign=-1;}
                    else
                    {
                        if(str[i]=='+')
                        {sign=1;}
                        else
                        {
                            if(str[i]>='0' && str[i]<='9')
                                result=(str[i]-'0');
                            else
                                return 0;
                        }
                    }
                    flag0=false;
                }
                
            }
            else
            {
                if(str[i]<'0' || str[i]>'9')
                {return result*sign;}
                else
                {
                    if(result>INT_MAX/10 && sign==1)
                    {return INT_MAX;}
                    if(result>INT_MAX/10 && sign==-1)
                    {return INT_MIN;}
                    else
                    {
                        if(result==INT_MAX/10)
                        {
                            if(str[i]>'7' && sign==1)
                                return INT_MAX;
                            if(str[i]>'8' && sign==-1)
                                return INT_MIN;
                        }
                            result*=10;
                            result+=(str[i]-'0');
                    }
                }
            }
 
        }
        return result*sign;
    }
};
