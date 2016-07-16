class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
        {
            return true;
        }
        else if(p && q && p->val == q->val)
        {
            
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
        return false;
    }
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return (!p && !q ? true : (p && q ? (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right) : false)); 
    }
};