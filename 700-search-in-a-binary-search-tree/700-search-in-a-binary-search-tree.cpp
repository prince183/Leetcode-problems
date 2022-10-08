/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode * newRoot;
    void subTree(TreeNode* root, int val)
    {
        if(!root) return;
        if(root->val == val)
        {
            newRoot = root;
            return;
        }
        subTree(root->left, val);
        subTree(root->right, val);
        return;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        subTree(root,val);
        return newRoot;
    }
};