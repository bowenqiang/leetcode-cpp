class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size());
        result[nums.size()-1]=1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            result[i]=result[i+1]*nums[i+1];
        }
        int left=1;
        for(int i=0;i<nums.size();i++)
        {
            result[i]=result[i]*left;
            left=left*nums[i];
        }
        return result;
        
    }
};
