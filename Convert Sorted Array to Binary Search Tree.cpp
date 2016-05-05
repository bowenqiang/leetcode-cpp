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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return getBST(0,nums.size()-1,nums);
        
    }
    TreeNode* getBST(int left,int right,vector<int>& nums)
    {
        if(left>right)
        {
            return NULL;
        } else if(left==right) {
            return new TreeNode(nums[left]);
        } else {
            int mid=(left+right)/2;
        TreeNode* node=new TreeNode(nums[mid]);
        node->val=nums[mid];
        node->left=getBST(left,mid-1,nums);
        node->right=getBST(mid+1,right,nums);
        return node;
        }
        
    }
};
