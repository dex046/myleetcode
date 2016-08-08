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
void solvebinary(TreeNode* root, vector<string>& res, string str)
{
    ostringstream s1;
    if(str == "")
    {
        s1 << root->val;
    }
    else
        s1 << "->" << root->val;
    str += s1.str();
    if(!root->left && !root->right)
    {
        res.push_back(str);
    }
    else
    {
        if(root->left)
        {
            solvebinary(root->left, res, str);
        }
        if(root->right)
        {
            solvebinary(root->right, res, str);
        }
    }
}
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res = {};
        string str = "";
        if(!root)
            return res;
        solvebinary(root, res, str);
        return res;
    }
};