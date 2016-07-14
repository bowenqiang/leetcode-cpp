class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<int>ans(n,INT_MAX);
        ans[0]=1;
        if(n==1)
            return 1;
        int m=primes.size();
        vector<int> indexs(m,1);
        vector<int> factors(primes.begin(),primes.end());
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
                ans[i]=min(ans[i],factors[j]);
            for(int j=0;j<m;j++)
            {
                if(ans[i]==factors[j])
                {
                    factors[j]=primes[j]*ans[indexs[j]];
                    indexs[j]++;
                }
            }
        }
        return ans[n-1];
        
    }
};
