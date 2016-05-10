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
    int sumNumbers(TreeNode* root) {
        int result=0;
        if(root==NULL)
            return result;
        function(root,result,0);
        return result;
        
    }
    void function(TreeNode* root,int &result,int sum)
    {
        if(root->left==NULL && root->right==NULL)
        {
            result+=sum*10+root->val;
            return;
        }
        sum=sum*10+root->val;
        if(root->right==NULL)
            function(root->left,result,sum);
        else if(root->left==NULL)
            function(root->right,result,sum);
        else
        {
            function(root->left,result,sum);
            function(root->right,result,sum);
        }
    }
};
