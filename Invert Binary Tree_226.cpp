//一个修改了原来的树，一个没有修改原来的树
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root != NULL)
        {
            TreeNode *temp = root->left;
            root->left = root->right;
            root->right = temp;
            invertTree(root->left);
            invertTree(root->right);
        }
        return root;
    }
};
class Solution {
public:
TreeNode* invertTree(TreeNode* root)
{
	if (root)
	{
		TreeNode *r1 = new TreeNode(root->val);
		if (root->left)
		{
			r1->right = invertTree(root->left);
		}
		if (root->right)
		{
			r1->left = invertTree(root->right);
		}
		return r1;
	}
	else return root;
}