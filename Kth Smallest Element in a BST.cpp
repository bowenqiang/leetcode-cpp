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
    int kthSmallest(TreeNode* root, int k) {
        
        stack<TreeNode*> path;
        TreeNode* p;
        p=root;
        if(p==NULL)
            return 0;
        
        while(p->left!=NULL)
        {
            path.push(p);
            p=p->left;
        }
        
        while(k>0 && (p!=NULL ||!path.empty()))
        {
            if(p==NULL)
            {
                p=path.top();
                path.pop();
                if(--k==0) return p->val;
                p=p->right;
            }
            else
            {
                path.push(p);
                p=p->left;
            }
        }
        return p->val;
    }
};
