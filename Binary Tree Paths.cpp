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
    vector<string> paths;
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL)
            return paths;
        ostringstream ss;
        ss.str("");
        ss<<root->val;
        findPath(root,ss.str());
        return paths;
        
    }
    
    void findPath(TreeNode* root,string str)
    {
        ostringstream ss;
        ss.str("");
        if(root->left==NULL && root->right==NULL)
        {
            paths.push_back(str);
        }
        if(root->left!=NULL)
        {
            ss<<"->"<<(root->left)->val;
            findPath(root->left,str+ss.str());
            ss.str("");
        }
        if(root->right!=NULL)
        {
            ss<<"->"<<(root->right)->val;
            findPath(root->right,str+ss.str());
            ss.str("");
        }
        
    }
    
};