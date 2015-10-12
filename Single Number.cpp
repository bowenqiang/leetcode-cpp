#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		unordered_map<size_t, int> map0, map1;
		hash<int> hash_fn;
		for (int i = 0; i < nums.size(); i++)
		{
			map0[hash_fn(nums[i])]++;
			map1[hash_fn(nums[i])] = nums[i];
		}
		for (auto &it : map0)
			if (it.second == 1)
				return map1[it.first];
		return 1;
	}
};



int main()
{
	vector<int>num = { 1, 2, 3, 4, 2, 3, 4, 4 };
	Solution sol;
	cout << sol.singleNumber(num);

	return 0;
}