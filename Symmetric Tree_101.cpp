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
bool isSame(TreeNode *root1, TreeNode *root2)
{
    if(!root1 && !root2)
    {
        return true;
    }
    
    if(root1 && root2 && root1->val == root2->val)
    {
        return isSame(root1->left, root2->right) && isSame(root1->right, root2->left);
    }
    else
    {
        return false;
    }
}
    bool isSymmetric(TreeNode* root) {
        if(!root)
        {
            return true;
        }
        return isSame(root->left, root->right);
    }
};