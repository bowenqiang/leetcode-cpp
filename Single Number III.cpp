class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
            result^=nums[i];
        }
        int lastbitone=result-(result&(result-1));
        vector<int>val1;
        vector<int>val2;
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]&lastbitone)==0)
                val1.push_back(nums[i]);
            else
                val2.push_back(nums[i]);
        }
        vector<int> n(2,0);
        for(int i=0;i<val1.size();i++)
        {
            n[0]^=val1[i];
        }
        for(int i=0;i<val2.size();i++)
        {
            n[1]^=val2[i];
        }
        
        return n;
    }
};
