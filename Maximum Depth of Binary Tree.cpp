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
	int maxDepth(TreeNode* root) {
     int deep = 0; 
     if(root) 
     { 

          int lchilddeep = maxDepth(root->left); 
          int rchilddeep = maxDepth(root->right); 
          deep = lchilddeep>=rchilddeep?lchilddeep+1:rchilddeep+1; 

     } 

     return deep;
	}
};