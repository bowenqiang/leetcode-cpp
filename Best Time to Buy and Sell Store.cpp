//////Time Limit Exceeded with the extreme large testcase, but algorithm should work. DP
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<2)
            return NULL;
        vector<int> profits(n+1,0);
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                profits[j]=max(prices[j-1]-prices[i-1],max(profits[j],profits[j-1]));
            }
        }
        return profits[n];
    }
};*/
/////solution without DP
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<2)
            return NULL;
        int low=prices[0];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(low>prices[i])
            {
                low=prices[i];
            }
            else
            {
                if((prices[i]-low)>ans)
                {
                    ans=prices[i]-low;
                }
            }
        }
        return ans;
    }
};
