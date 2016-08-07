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
bool solveBalanced(TreeNode* root, int& depth)
{
	if (root)
	{
		++depth;
		int dep_left = depth, dep_right = depth;
		if (solveBalanced(root->left, dep_left) && solveBalanced(root->right, dep_right))
		{
			depth = max(dep_left, dep_right);
			if (abs(dep_left - dep_right) <= 1)
			{
				return true;
			}
			else
				return false;
		}
		else
			return false;
	}
	else
	{
		return true;
	}
}
bool isBalanced(TreeNode* root) {
	if (root)
	{
		int depth = 0;
		return solveBalanced(root, depth);
	}
	else return true;
}
};

class Solution {
public:
bool flag = true;
int solve(TreeNode* root, int deep)
{
    if(!flag)
    {
        return 0;
    }
    
    if(!root)
    {
        return deep;
    }
    
    int left_deep = solve(root->left, deep + 1);
    int right_deep = solve(root->right, deep + 1);
    
    if(abs(left_deep - right_deep) > 1)
    {
        flag = false;
        return 0;
    }
    else
    {
        return left_deep > right_deep ? left_deep : right_deep;
    }
}
    bool isBalanced(TreeNode* root) {
        solve(root, 1);
        return flag;
    }
};