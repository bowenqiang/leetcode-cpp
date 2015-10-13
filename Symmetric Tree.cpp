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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return fun(root->left,root->right);
    }
private:
    bool fun(TreeNode* node_l,TreeNode*node_r)
    {
        if(node_l==NULL && node_r==NULL)
            return true;
        if(node_l==NULL && node_r!=NULL)
            return false;
        if(node_l!=NULL && node_r==NULL)
            return false;
        if(node_l->val!=node_r->val)
            return false;
        return fun(node_l->left,node_r->right)&&fun(node_l->right,node_r->left);
        
            
        
        
        
    }
};