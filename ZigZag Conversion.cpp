#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


class Solution {
public:
	string convert(string s, int numRows) {
		string result;
		if (numRows == 1)
		{
			result = s;
			cout << result;
			return result;
		}
		for (int i = 0; i < numRows; i++)
		{
			int skip=0, gap=0;
			gap = (numRows - 1 - i) * 2;
			bool flag = true;
			for (int j = i; j < s.size();)
			{
				if (gap == (numRows - 1) * 2 || gap==0)
				{
					skip = max(gap, (numRows - 1) * 2);			
				}
				else
				{
					if (flag)
					{
						skip = gap;
						flag = false;
					}
					else
					{
						skip = (numRows - 1) * 2 - gap;
						flag = true;
					}
				}

				result.push_back(s[j]);
				j += skip;
			}

		}
		cout << result;
		return result;
	}
};

int main()
{
	string s;
	s = "PAYPALISHIRING";
	Solution sol;
	int numRows;
	cin >> numRows;
	sol.convert(s, numRows);
	return 0;
}