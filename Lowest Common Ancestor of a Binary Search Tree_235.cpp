class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int value_max = max(p->val, q->val);
        int value_min = min(p->val, q->val);
        
        while(root)
        {
            if(root->val > value_max)
            {
                root = root->left;
            }
            else if(root->val < value_min)
            {
                root = root->right;
            }
            else
            {
                break;
            }
        }
        return root;
    }
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int node_max = (p->val > q->val) ? p->val : q->val;
        int node_min = (p->val > q->val) ? q->val : p->val;
        if(root->val == p->val || root->val == q->val)
        {
            return root;
        }
        else if(node_max < root->val)
        {
            return lowestCommonAncestor(root->left, p, q);
        }
        else if(node_min > root->val)
        {
            return lowestCommonAncestor(root->right, p, q);
        }
        else
        {
            return root;
        }
    }
};

class Solution {
public:

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* temp_p = root;
        vector<TreeNode*> vec_p;
        while(temp_p)
        {
            vec_p.push_back(temp_p);
            if(p->val > temp_p->val)
            {
                temp_p = temp_p->right;
            }
            else if(p->val < temp_p->val)
            {
                temp_p = temp_p->left;
            }
            else
            {
                break;
            }
        }
        
        temp_p = root;
        TreeNode *res = root;
        while(temp_p)
        {
            if(find(vec_p.begin(), vec_p.end(), temp_p) != vec_p.end())
            {
                res = temp_p;
            }
            if(q->val > temp_p->val)
            {
                temp_p = temp_p->right;
            }
            else if(q->val < temp_p->val)
            {
                temp_p = temp_p->left;
            }
            else
            {
                break;
            }
        }
        return res;
    }
};

class Solution {
public:

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* temp_p = root;
        set<TreeNode*> set_p;
        while(temp_p)
        {
            set_p.insert(temp_p);
            if(p->val > temp_p->val)
            {
                temp_p = temp_p->right;
            }
            else if(p->val < temp_p->val)
            {
                temp_p = temp_p->left;
            }
            else
            {
                break;
            }
        }
        
        temp_p = root;
        TreeNode *res = root;
        while(temp_p)
        {
            if(set_p.find(temp_p) != set_p.end())
            {
                res = temp_p;
            }
            if(q->val > temp_p->val)
            {
                temp_p = temp_p->right;
            }
            else if(q->val < temp_p->val)
            {
                temp_p = temp_p->left;
            }
            else
            {
                break;
            }
        }
        return res;
    }
};