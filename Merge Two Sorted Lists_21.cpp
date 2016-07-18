class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *root = new ListNode(0);
        ListNode *temp_root = root;
        while(l1 && l2)
        {
            if(l1->val < l2->val)
            {
                ListNode* ll = new ListNode(l1->val);
                temp_root->next = ll;
                temp_root = temp_root->next;
                l1 = l1->next;
            }
            else
            {
                ListNode* ll = new ListNode(l2->val);
                temp_root->next = ll;
                temp_root = temp_root->next;
                l2 = l2->next;
            }
        }
        
        while(l1)
        {
            ListNode* ll = new ListNode(l1->val);
            temp_root->next = ll;
            temp_root = temp_root->next;
            l1 = l1->next;
        }
        
        while(l2)
        {
            ListNode* ll = new ListNode(l2->val);
            temp_root->next = ll;
            temp_root = temp_root->next;
            l2 = l2->next;
        }
        
        return root->next;
    }
};