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
    vector<int> v;
    
    //inorder traversal of a binary tree is sorted
    void helper(TreeNode* root)
    {
        if(!root) return ;
        helper(root->left);
        v.push_back(root->val);
        helper(root->right);
        return;
    }
    bool isValidBST(TreeNode* root) {
        helper(root);
        int size = v.size();
        for(int i=0; i<size-1; i++)
            if(v[i]>=v[i+1])
                return false;
        return true;
    }
};