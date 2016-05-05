class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> ans;
        backtracking(result,ans,0,n,k);
        return result;
    }
    void backtracking(vector<vector<int>> &result,vector<int>ans,int last,int n,int k)
    {
        if(k==0)
        {
            result.push_back(ans);
        }
        for(int i=last+1;i<=n;i++)
        {
            ans.push_back(i);
            backtracking(result,ans,i,n,k-1);
            ans.pop_back();
        }
        
    }
};
