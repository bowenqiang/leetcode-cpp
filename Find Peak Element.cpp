class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        int last=1; ////1 is up, 0 is down;
        int curr=1;
        int i=0;
        for(;i<nums.size()-1;i++)
        {
            nums[i]<nums[i+1]?curr=1:curr=0;
            if(last==1 && curr==0)
                return i;
            last=curr;
        }
        return nums.size()-1;
        
    }
};
