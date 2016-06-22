class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>nums;
        for(int i=1;i<=n;i++)
            nums.push_back(i);
        for(int i=1;i<k;i++)
        {
            nextPermutation(nums);
        }
        string result;
        for(int i=0;i<nums.size();i++)
        {
            result+='0'+nums[i];
        }
        return result;
        
    }
    void nextPermutation(vector<int> &nums)
    {
        int n=nums.size();
        int i;
        for(i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
                break;
        }
        if(i<0)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        int j;
        for(j=n-1;j>=0;j--)
        {
            if(nums[j]>nums[i])
                break;
        }
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        reverse(nums.begin()+i+1,nums.end());
        
    }
};
