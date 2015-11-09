class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.empty())
            return 0;
        if(nums.size()==1)
            return nums[0];
        
        int left=0,right=nums.size()-1,current;
        current=(left+right)/2;
        while(1)
        {
            if(right-left==1)
            {
                return min(nums[right],nums[left]);
            }
            if(nums[current]>nums[right])
            {
                left=current;
            }
            else
            {
                right=current;
            }
            current=(left+right)/2;
            
        }
        
    }
};
