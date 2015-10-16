class Solution {
public:
	bool isUgly(int num) {
		int factors[3] = { 5,3,2 };
		if (num == 1)
			return true;
		if (num == 0)
			return false;
		for (int i = 0; i < 3; i++)
		{
			int j = 5;
			while (j >= 1)
			{
				int factor=pow(factors[i], j);
				if (num%factor == 0)
				{
					num = num / factor;
					if (num == 1)
						return true;
				}
				else
				{
					j--;
				}				
			}
		}
		return false;

	}
};