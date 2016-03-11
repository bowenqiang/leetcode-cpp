class Solution {
public:
	int minimumTotal(vector<vector<int>>& triangle) {
		int m = triangle.size();
		vector<vector<int>>dp(m, vector<int>(m, 0));
		vector<vector<int>>flag(m, vector<int>(m, 0));
		int ans = getminimumTotal(triangle, 0, 0, dp, flag);
		return ans;
	}

	int getminimumTotal(vector<vector<int>>& triangle, int x, int y, vector<vector<int>>& dp, vector<vector<int>>& flag)
	{
		if (x<0 || x>=triangle.size() || y <0 || y>x)
		{
			return 0;
		}
		if (flag[x][y] == 0)
		{
			dp[x][y] = triangle[x][y] + min(getminimumTotal(triangle, x + 1, y, dp, flag), getminimumTotal(triangle, x + 1, y + 1, dp, flag));
			flag[x][y] = 1;
		}
		return dp[x][y];
	}

};
