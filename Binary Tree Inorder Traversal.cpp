/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 /////recursive
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> val;
        function(root,val);
        return val;
    }
    void function(TreeNode *root,vector<int> &val)
    {
        if(root==NULL)
            return;
        function(root->left,val);
        val.push_back(root->val);
        function(root->right,val);

    }
};

//iteratively
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> val;
        stack<TreeNode*> stk;
        while(!stk.empty() || root!=NULL)
        {
            if(root!=NULL)
            {
                stk.push(root);
                root=root->left;
            }
            else
            {
                root=stk.top();
                stk.pop();
                val.push_back(root->val);
                root=root->right;
            }
        }
        return val;
    }
};
