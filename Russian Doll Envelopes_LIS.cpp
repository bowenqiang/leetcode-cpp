bool cmp(pair<int,int> pair1,pair<int,int> pair2)
{
    return pair1.first!=pair2.first?pair1.first<pair2.first:pair1.second>pair2.second;
}
class Solution {
public:
    int maxEnvelopes(vector<pair<int, int>>& envelopes) {
        if(envelopes.empty())
            return 0;
        sort(envelopes.begin(),envelopes.end(),cmp);
        int n=envelopes.size();
        vector<int> heights(n+1,INT_MAX);
        vector<int> dp(n,0);
        for(int i=0;i<n;i++)
        {
            int k=lower_bound(heights.begin(),heights.end(),envelopes[i].second)-heights.begin();
            dp[i]=k;
            heights[k]=envelopes[i].second;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,dp[i]);
        }
        return ans+1;
        

    }
};
