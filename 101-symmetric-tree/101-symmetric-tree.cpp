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
    bool symmetricTest(TreeNode* p, TreeNode* q)
    {
        if(!p && !q) return true;
        if(!p || !q) return false;
        
        else if(p->val != q->val) return false;
        
       return symmetricTest(p->left,q->right) && symmetricTest( p->right, q->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return symmetricTest(root->left,root->right);
    }
    
};