class Solution {
public:
       vector<vector<int>>ans;
    vector<vector<int>> permute(vector<int>& nums) {

       
       if(nums.empty())
       {
           return ans;
       }
       int n=0;
       fun(nums,n);
       
       return ans; 
    }
    
    void fun(vector<int>& nums,int n)
    {
        if(n==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        else
        {
            for(int j=n;j<nums.size();j++)
            {
                swap(nums[n],nums[j]);
                fun(nums,n+1);
                swap(nums[n],nums[j]);
            }
        }
        
    }
};
