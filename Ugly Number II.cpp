class Solution {
public:
    int nthUglyNumber(int n) {
        int* dp=new int[n];
        memset(dp,0,n*sizeof(int));
        dp[0]=1;
        int l2=2,l3=3,l5=5;
        int idx2=0,idx3=0,idx5=0;
        for(int i=1;i<n;i++)
        {
            int minNum=min(l2,min(l3,l5));
            dp[i]=minNum;
            if(l2==minNum)
                l2=2*dp[++idx2];
            if(l3==minNum)
                l3=3*dp[++idx3];
            if(l5==minNum)
                l5=5*dp[++idx5];
        }
        return dp[n-1];
    }
};