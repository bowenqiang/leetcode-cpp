class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        vector<int> dp(amount+1,0);
        for(int i=1;i<=amount;i++)
        {
            int minNum=INT_MAX;
            for(int j=0;j<coins.size();j++)
            {
                if(i-coins[j]>=0 && dp[i-coins[j]]!=-1)
                    minNum=min(minNum,dp[i-coins[j]]+1);
            }
            if(minNum==INT_MAX)
                dp[i]=-1;
            else
                dp[i]=minNum;
        }
        
        return dp[amount];
    }
};
