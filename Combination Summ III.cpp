class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> ans;
        backtracking(result,ans,0,0,n,k);
        return result;
    }
    void backtracking(vector<vector<int>> &result,vector<int> ans,int last,int sum,int n,int k)
    {
        if(sum==n && k==0)
        {
            result.push_back(ans);
            return;
        }
        if(sum>n || k==0)
        {
            return;
        }
        for(int i=last+1;i<=9;i++)
        {
            ans.push_back(i);
            backtracking(result,ans,i,sum+i,n,k-1);
            ans.pop_back();
        }
        
    }
};
