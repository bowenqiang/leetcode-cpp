bool cmp(pair<int,int> pair1,pair<int,int> pair2)
{
    return pair1.first!=pair2.first?pair1.first<pair2.first:pair1.second<pair2.second;
}
class Solution {
public:
    int maxEnvelopes(vector<pair<int, int>>& envelopes) {
        if(envelopes.empty())
            return 0;
        sort(envelopes.begin(),envelopes.end(),cmp);
        int n=envelopes.size();
        vector<int> dp(n,1);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(envelopes[j].first==envelopes[i].first || envelopes[j].second>=envelopes[i].second)
                    continue;
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
            ans=max(ans,dp[i]);
        return ans;
    }
};
