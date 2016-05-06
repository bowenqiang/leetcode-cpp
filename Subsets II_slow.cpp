class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> result;
        backtracking(ans,result,nums,0);
        return ans;
        
    }
    void backtracking(vector<vector<int>> &ans,vector<int> result,vector<int>nums,int idx)
    {
        if(isDup(ans,result))
        {
            return;
        }
        ans.push_back(result);
        for(int i=idx;i<nums.size();i++)
        {
            result.push_back(nums[i]);
            backtracking(ans,result,nums,i+1);
            result.pop_back();
        }
    }
    bool isDup(vector<vector<int>> &ans,vector<int> result)
    {
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==result)
                return true;
        }
        return false;
    }
    
};
