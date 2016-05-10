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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        function(root,result);
        return result;
    }
    void function(TreeNode* root,vector<int> &result)
    {
        if(root==NULL)
            return;
        function(root->left,result);
        function(root->right,result);
        result.push_back(root->val);
    }
};
