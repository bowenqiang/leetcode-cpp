/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(root==NULL)
            return;
        queue<TreeLinkNode*>nodestack;
        queue<int>levelstack;
        int level=0,levelPre=-1;
        nodestack.push(root);
        levelstack.push(level);
        TreeLinkNode *node=NULL,*nodePre=NULL;
        while(!nodestack.empty())
        {
            node=nodestack.front();
            nodestack.pop();
            level=levelstack.front();
            levelstack.pop();
            if(level!=levelPre)
            {
                levelPre=level;
                nodePre=node;
            }
            else
            {
                nodePre->next=node;
                levelPre=level;
                nodePre=node;
            }
            
            if(node->left!=NULL)
            {
                nodestack.push(node->left);
                levelstack.push(level+1);
            }  
            if(node->right!=NULL)
            {
                nodestack.push(node->right);
                levelstack.push(level+1);
            }
            
            
            
        }
        
        
        
        
        
    }
};
