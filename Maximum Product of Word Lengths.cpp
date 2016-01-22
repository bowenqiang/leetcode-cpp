bool mycmp(string str1, string str2)
{
	return str1.length() > str2.length();
}
class Solution {

public:
	int maxProduct(vector<string>& words) {
		sort(words.begin(), words.end(), mycmp);
		int maxLength = 0;
		vector<int> val(words.size());
		for (int i = 0; i < words.size(); i++)
		{
			val[i] = convert(words[i]);
		}

		for (int i = 0; i < words.size(); i++)
		{
			for (int j = i + 1; j < words.size(); j++)
			{
				if ((val[i] & val[j]) == 0)
				{
					maxLength=max(maxLength, (int)(words[i].length()*words[j].length()));
				}
			}
		}

		return maxLength;

	}

	int convert(string str)
	{
		int res = 0x0;
		for (int i = 0; i < str.length(); i++)
		{
			res |= 1<<(str[i]-'a');
		}
		return res;
	}
};
