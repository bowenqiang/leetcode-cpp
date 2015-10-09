#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		double result;
		vector<int> num_total(nums1);
		num_total.insert(num_total.end(), nums2.begin(), nums2.end());
		sort(num_total.begin(), num_total.end());
		if (num_total.size() % 2 == 1)
			result = num_total[(double)(num_total.size() + 1) / 2 - 1];
		else
			result = (num_total[(double)num_total.size() / 2 - 1] + (double)num_total[num_total.size() / 2]) / 2;
		return result;
	}
};