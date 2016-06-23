class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int bit[32]={0};
        int res=0;
        for(int i=0;i<32;i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                bit[i]+=(nums[j]>>i)&1;
            }
            res|=(bit[i]%3)<<i;
        }
        return res;
    }
};
/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int one=0;
        int two=0;
        int three=0;
        for(auto i:nums)
        {
            two|=(one & i);
            one^=i;
            three=~(one & two);
            one&=three;
            two&=three;
        }
        return one;
        
    }
};
*/
