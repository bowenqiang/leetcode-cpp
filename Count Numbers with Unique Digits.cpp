class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int dp;
        dp=10;
        if(n==0)
            return 1;
        if(n==1)
            return dp;
        for(int i=2;i<=n;++i)
        {
            int f=9;
            for(int j=2;j<=i;++j)
            {
                f*=(9-j+2);
            }
            dp=dp+f;
        }
        return dp;
    }
};
