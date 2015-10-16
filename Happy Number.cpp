class Solution {
public:
	bool isHappy(int n) {
		unordered_map<int, int> map;
		while (map[n] !=1)
		{
			map[n] = 1;
			n = compute(n);
			if (n == 1)
				return true;
		}
		return false;

	}
	int compute(int n)
	{
		int result=0;
		while(n / 10 != 0)
		{
			result += pow(n%10,2);
			n = n / 10;
		}
		result += pow(n, 2);
		return result;
	}
};