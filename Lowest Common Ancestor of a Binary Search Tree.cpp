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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode*left,*right;
        //p->val<q->val?(left=p,right=q):(left=q,right=p);
        if(p->val>q->val)
        {
            left=q;
            right=p;
        }
        else
        {
            left=p;
            right=q;
        }
        return fun(root,left,right);
    }
private:
    TreeNode* fun(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(root->val>=p->val&&root->val<=q->val)
            return root;
        else
        {
            if(root->val>q->val)
            {
                return fun(root->left,p,q);
            }
            else
            {
                return fun(root->right,p,q);
            }
        }
    }
};