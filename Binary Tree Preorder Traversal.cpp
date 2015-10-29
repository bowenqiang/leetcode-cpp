/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//////recursive solution; 
class Solution {
public:
    vector<int> val;
    vector<int> preorderTraversal(TreeNode* root) {
        function(root,val);
        return val;
    }
    void function(TreeNode* root,vector<int> &val)
    {
        if(root==NULL)
            return;
        val.push_back(root->val);
        function(root->left,val);
        function(root->right,val);
    }
};

//iteratively
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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> stk;
        vector<int> results;
        while(!stk.empty() || root!=NULL)
        {
            if(root!=NULL)
            {
                results.push_back(root->val);
                if(root->right!=NULL)
                {
                    stk.push(root->right);
                }
                root=root->left;
            }
            else
            {
                root=stk.top();
                stk.pop();
            }
        }
        return results;
    }
};
