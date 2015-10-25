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
    vector<vector<int>>result;
    vector<vector<int>> levelOrder(TreeNode* root) {
        function(root,0);
        return result;
        
    }
    void function(TreeNode* root,int level)
    {
        if(root==NULL)
            return;
        if(result.size()>level)
        {
            result[level].push_back(root->val);
        }
        else
        {
            vector<int>temp;
            temp.push_back(root->val);
            result.push_back(temp);
        }
        
        function(root->left,level+1);
        function(root->right,level+1);   
        
        
    }
};