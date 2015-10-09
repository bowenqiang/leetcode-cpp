class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> indices;
		vector<int> clone(nums);
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); i++)
		{
			cout<<nums[i]<<" ";
		}
		cout << endl;
		int index_max=0;
		//while (index_max < nums.size() && target >= nums[index_max])
		//{
		//	index_max++;
		//}
		index_max = nums.size();
		cout << index_max << endl;
		for (int i = 0; i < index_max; i++)
			for (int j = i + 1; j < index_max; j++)
			{

			if (nums[i] + nums[j] == target)
			{
				cout << i << " " << j << endl;
				int n=0;
				for (; n < nums.size(); n++)
				{
					if (clone[n] == nums[i])
					{
						indices.push_back(n + 1);
						break;
					}
				}
				int m=0;
				for (; m < nums.size(); m++)
				{
					if (m == n)
						continue;
					if (clone[m] == nums[j])
					{
						indices.push_back(m + 1);
						break;
					}
				}
				sort(indices.begin(), indices.end());
				cout << indices.size() << " " << indices[0] << " " << indices[1] << endl;
				return indices;

			}

			}


		return indices;
	}
};
