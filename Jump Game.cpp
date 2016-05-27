class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if (n== 0)
            return false;
        int step = nums[0];
        for(int i = 1; i < n; i++)
            if (step > 0)
            {
                 step--;
                 step = max(step, nums[i]);
            }
            else
                return false;
        return true;
    }

};
