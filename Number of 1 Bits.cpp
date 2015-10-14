class Solution {
public:
	int hammingWeight(unsigned n) {
		int i = 0;
		int binary[32];
		for (; i < 32; i++)
		{
			binary[i] = (n & 1);
			n = n / 2;
		}
		int counter = 0;
		for (i = 0; i < 32; i++)
		{
			if (binary[i] == 1)
				counter++;
		}
		return counter;
	}
};