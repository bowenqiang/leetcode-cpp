#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <stack>

using namespace std;

class Solution {
public:
	int evalRPN(vector<string>& tokens) {
		stack<int>cache;
		for (int i = 0; i < tokens.size(); i++)
		{
			if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
			{
				int num1 = cache.top();
				cache.pop();
				int num2 = cache.top();
				cache.pop();
				cache.push(Calculate(num2, num1, tokens[i][0]));
			}
			else
			{
				cache.push(str2int(tokens[i]));
			}				
		}
		return cache.top();

	}

private:


	int Calculate(int num1, int num2, char op)
	{
		int cache;
		switch (op)
		{
		case '*':cache = num1*num2; break;
		case '+':cache = num1 + num2; break;
		case '-':cache = num1 - num2; break;
		case '/':cache = num1 / num2; break;
		default:
			break;
		}
		return cache;
	}
	int str2int(string str)
	{
		int result = 0;
		int sign = 1;
		if (str[0] == '-')
			sign = -1;
		else
			result = ((int)str[0] - 48) + result * 10;
		for (int i = 1; i < str.size(); i++)
		{
			if (str[0])
				result = ((int)str[i] - 48) + result * 10;
		}
		return result*sign;
	}

};