/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    BSTIterator(TreeNode *root) {
        function(root);
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !nodeStack.empty();
    }

    /** @return the next smallest number */
    int next() {
        TreeNode *temp=nodeStack.top();
        nodeStack.pop();
        return temp->val;
    }
    void function(TreeNode *root)
    {
        if(root==NULL)
            return;
        function(root->right);
        nodeStack.push(root);
        function(root->left);
    }
    stack<TreeNode *> nodeStack;
};
    

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
