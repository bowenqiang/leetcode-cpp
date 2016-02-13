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
