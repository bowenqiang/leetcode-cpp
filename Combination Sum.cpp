class Solution {
public:

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum=0;
        vector<int> solution;
        vector<vector<int>> result;
        sort(candidates.begin(),candidates.end());
        getcombinationSum(sum,0,target,candidates,solution,result);
        return result;
        
    }
    void getcombinationSum(int &sum,int level,int target,vector<int>&candidates,vector<int>&solution,vector<vector<int>> &result){
        if(sum==target)
        {
            result.push_back(solution);
            return;
        }
        if(sum>target)
            return;
        for(int i=level;i<candidates.size();i++)
        {
            sum+=candidates[i];
            solution.push_back(candidates[i]);
            getcombinationSum(sum,i,target,candidates,solution,result);
            solution.pop_back();
            sum-=candidates[i];
        }
        
    }
    
};
