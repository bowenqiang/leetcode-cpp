class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		vector<int>::iterator it;
		int counter = 0;
		for (it = nums.begin(); it != nums.end();)
		{
			if (*it == 0)
			{
				it = nums.erase(it);
				counter++;
			}
			else
			{
				it++;
			}
		}
		for (int i = 0; i < counter; i++)
			nums.push_back(0);
	}
};