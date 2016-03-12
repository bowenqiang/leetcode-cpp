class Solution {
public:
    int rob(vector<int>& nums) {
        int size=nums.size();
        if(size==0)
            return 0;
        if(size==1)
            return nums[0];

        vector<int> dp1(size+3,0);
        vector<int> dp2(size+3,0);
        for(int i=size-1;i>=1;i--)
        {
            dp2[i]=nums[i]+max(dp2[i+2],dp2[i+3]);
        }
        int ans2=max(dp2[1],dp2[2]);
        
        nums[size-1]=0;
        for(int i=size-2;i>=0;i--)
        {
            dp1[i]=nums[i]+max(dp1[i+2],dp1[i+3]);
        }
        int ans1=max(dp1[0],dp1[1]);
        return max(ans1,ans2);
        
    }
};
