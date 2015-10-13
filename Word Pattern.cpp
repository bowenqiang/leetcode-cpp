#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class Solution {
public:
	bool wordPattern(string pattern, string str) {
		unordered_map<char, int>p2i;
		unordered_map<string, int>w2i;
		istringstream in(str);
		int i = 0, n = pattern.length();
		for (string word; in >> word;i++)
		{
			if (i >= n || p2i[pattern[i]] != w2i[word])
				return false;
			p2i[pattern[i]] = w2i[word] = i + 1;
		}
		return i == n;
	}
};
