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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> myque;
        vector<vector<int>> res;
        if(!root)
        {
            return res;
        }
        myque.push(root);
        
        while(!myque.empty())
        {
            int size = myque.size();
            vector<int> vec;
            for(int i = 0; i < size; ++i)
            {
                TreeNode *temp = myque.front();
                myque.pop();
                vec.push_back(temp->val);
                if(temp->left)
                {
                    myque.push(temp->left);
                }
                if(temp->right)
                {
                    myque.push(temp->right);
                }
            }
            res.push_back(vec);
        }
        vector<vector<int>> res2(res.rbegin(), res.rend());
        return res2;
    }
};