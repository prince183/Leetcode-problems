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
    int flag =0;
    void DFS(TreeNode* root, int targetSum, int sum)
    {
        if(!root)
            return;
        sum+= root->val;
      
        if(sum == targetSum && !root->left && !root->right)
            flag =1;
        
        
        DFS(root->left, targetSum, sum);
        DFS(root->right, targetSum, sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
         DFS(root, targetSum, 0);
         return flag;
    }
};