class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtracking("",ans,n,n);
        return ans;
    }
    
    void backtracking(string sublist,vector<string> &ans,int left,int right)
    {
        if(left==0 && right==0)
        {
            ans.push_back(sublist);
            return;
        }
        if(left>right)
            return;
        if(left>0)
        {
            backtracking(sublist+'(',ans,left-1,right);
        }
        if(right>0)
        {
            backtracking(sublist+')',ans,left,right-1);
        }

        
    }
};
