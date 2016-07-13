class Solution {
public:
    int solveDepth(TreeNode* root, int cen)
    {
        if(!root)
        {
            return cen;
        }
        int l = solveDepth(root->left, cen+1);
        int r = solveDepth(root->right, cen+1);
        return l > r ? l : r;
    }
    int maxDepth(TreeNode* root) {
        return solveDepth(root, 0);
    }
};