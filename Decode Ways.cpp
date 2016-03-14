class Solution {
public:
	int numDecodings(string s) {
		if (s.empty())
			return 0;
		int ans = 0;
		int size = s.length();
		int *dp = new int[size];
		for (int i = 0; i < size; i++)
		{
			if (i == 0)
			{
				if (s[i] == '0')
					return 0;
				else
					dp[i] = 1;
				continue;
			}
			if (i == 1)
			{
				if (s[i] == '0')
				{
					if (s.substr(i - 1, 2) <= "26")
						dp[i] = 1;
					else
						return 0;
					continue;
				}
				else
				{
					if (s.substr(i - 1, 2) <= "26")
						dp[i] = 2;
					else
						dp[i] = 1;
					continue;
				}
			}
			if (s[i] == '0')
			{
				if (s[i - 1] == '0')
					return 0;
				if (s.substr(i - 1, 2) <= "26")
					dp[i] = dp[i-2];
				else
					return 0;
			}
			else
			{
				if (s.substr(i - 1, 2) <= "26")
					if (s[i - 1] == '0')
						dp[i] = dp[i - 2];
					else
					{
						dp[i] = dp[i - 1] + dp[i - 2];
					}
				else
					dp[i] = dp[i - 1];
			}

		}

		return dp[size-1];
	}
};
