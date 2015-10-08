#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
	int romanToInt(string s) {

		int L, R, sum = 0;
		for (int i = 0; i < s.length(); i++)
		{
			L = Char2Int(s[i]);
			R = Char2Int(s[i + 1]);
			if (L >= R)
			{
				sum += L; 
			}
			else
			{
				sum -= L;
			}

		}
		return sum;
	}

	int Char2Int(char ch)
	{
		int result = 0;
		switch (ch)
		{
		case 'I': result = 1; break;
		case 'V': result = 5; break;
		case 'X': result = 10; break;
		case 'L': result = 50; break;
		case 'C': result = 100; break;
		case 'D': result = 500; break;
		case 'M': result = 1000; break;
		default:
			break;
		}
		return result;
	}

};


int main()
{
	Solution a;
	string s;
	cin >> s;
	cout << a.romanToInt(s);

}