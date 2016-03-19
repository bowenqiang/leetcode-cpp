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
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        if(isBalanced(root->left) && isBalanced(root->right))
        {
            if(abs(findDepth(root->left)-findDepth(root->right))>1)
                return false;
            else
                return true;
        }
        else
            return false;
        
    }
    int findDepth(TreeNode* root)
    {
        int depth=0;
        if(root==NULL)
            return depth;
        int dl=findDepth(root->left);
        int dr=findDepth(root->right);
        depth=max(dl,dr)+1;
        return depth;
    }
};
