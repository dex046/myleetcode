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
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)
        {
            return false;
        }
        
        if(sum == root->val && !root->left && !root->right)
        {
            return true;
        }
        
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    }
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)
            return false;
        if(root->left == root->right) return sum == root->val;
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    }
};

class Solution {
public:
bool hasPathSum(TreeNode* root, int sum) {
    stack<TreeNode*> st;
    TreeNode* itr = root;
    while(itr != NULL || !st.empty()){
        while(itr != NULL){
            if(itr->right != NULL)
                st.push(itr->right);
            st.push(itr);
            sum -= itr->val;
            itr = itr->left;
        }
        TreeNode* temp = st.top();
        st.pop();
        if(temp->left == NULL && temp->right == NULL && sum == 0)
            return true;
        if(temp->right && !st.empty() && temp->right == st.top()){
            itr = st.top();
            st.pop();
            st.push(temp);
        }else{
            sum += temp->val;

        }
    }
    return false;
}
};