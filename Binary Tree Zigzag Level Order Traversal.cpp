/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        function(root,result,1,true);
        return result;
        
    }
    
    void function(TreeNode* root, vector<vector<int>> &result, int level,bool left_right)
    {
        if(root==NULL)
            return;
        if(result.size()<level)
        {
            result.push_back(vector<int>());
        }
        if(left_right)
            result[level-1].push_back(root->val);
        else
            result[level-1].insert(result[level-1].begin(),root->val);
        function(root->left,result,level+1,!left_right);
        function(root->right,result,level+1,!left_right);
        
    }
};
