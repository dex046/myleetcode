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
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        if(!root->left && !root->right)
            return 1;
        int left_deep = -1;
        int right_deep = -1;
        if(root->left) left_deep = 1 + minDepth(root->left);
        if(root->right) right_deep = 1 + minDepth(root->right);
        return left_deep == -1 ? right_deep : right_deep == -1 ? left_deep : min(left_deep, right_deep);
    }
};

class Solution {
public:
void solve_dfs(TreeNode *root, int temp_deep, int &deep)
{
    if(temp_deep > deep)
    {
        return ;
    }
    if(!root->left && !root->right)
    {
        if(temp_deep < deep)
            deep = temp_deep;
        return ;
    }
    
    if(root->left)
        solve_dfs(root->left, temp_deep + 1, deep);
    if(root->right)
        solve_dfs(root->right, temp_deep + 1, deep);
}
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        int deep = 0x7fffffff;
        solve_dfs(root, 1, deep);
        return deep;
    }
};