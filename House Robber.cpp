class Solution {
public:
	int rob(vector<int>& nums) {
		int size = nums.size();
		vector<int> money(size + 3, 0);
		for (int i = size - 1; i >= 0; i--)
		{
			money[i] = nums[i] + max(money[i + 2], money[i + 3]);
		}

		return max(money[0],money[1]);



	}
};