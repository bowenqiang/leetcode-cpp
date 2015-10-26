#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <math.h>

using namespace std;

// Forward declaration of isBadVersion API.
bool isBadVersion(int version)
{
	if (version >= 1150769282)
		return true;
	else
		return false;
}

class Solution {
public:
	int firstBadVersion(int n) {
		int V2C;
		int left = 1, right = n;
		V2C = (1 + n) / 2;
		while (1)
		{
			if (isBadVersion(V2C))
			{
				if (V2C == 1)
				{
					return V2C;
				}
				else
				{
					if (!isBadVersion(V2C - 1))
					{
						return V2C;
					}
					else
					{
						right = V2C;
						double temp = (double)left / 2.0 + (double)V2C / 2.0;  //（left+V2C）can out of the range. and need to convert to double first, otherwise might skip some version;
						V2C = (int)temp;
					}
				}
			}
			else
			{
				if (V2C == (n - 1))
				{
					if (isBadVersion(n))
					{
						return n;
					}
					else
					{
						return -1;
					}
				}
				else
				{
					left = V2C;
					double temp = (double)V2C / 2.0 + (double)right / 2.0;
					V2C = (int)temp;
				}
			}
		}

	}
};


int main()
{
	Solution sol;
	cout<<sol.firstBadVersion(1420736637);

	
	return 0;
}