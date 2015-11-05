class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=nums.size()-1;i>=0;i--)
        {
            for(int j=nums.size()-1;j>=0;j--)
            {
                if(nums[j]<nums[j-1])
                {
                    int temp=nums[j];
                    nums[j]=nums[j-1];
                    nums[j-1]=temp;
                }
            }
        }
    }
};
