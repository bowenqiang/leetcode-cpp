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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        function(root,result,0);
        return result;
    }
    
    void function(TreeNode* root, vector<int> &result, int h)
    {
        if(root==NULL)
            return;
        if(result.size()<=h)
            result.push_back(root->val);
        function(root->right,result,h+1);
        function(root->left,result,h+1);
    }
};
