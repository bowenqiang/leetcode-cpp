class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> result;
        backtracking(ans,result,nums,0);
        return ans;
        
    }
    void backtracking(vector<vector<int>> &ans,vector<int> result,vector<int>nums,int idx)
    {
        ans.push_back(result);
        for(int i=idx;i<nums.size();i++)
        {
            result.push_back(nums[i]);
            backtracking(ans,result,nums,i+1);
            result.pop_back();
        }
    }
    
};
