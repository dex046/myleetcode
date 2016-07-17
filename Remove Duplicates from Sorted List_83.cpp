class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)
        {
            return head;
        }
        ListNode *pri = head, *now = head->next;
        while(now)
        {
            if(now->val == pri->val)
            {
                pri->next = now->next;
                now = now->next;
            }
            else
            {
                pri = now;
                now = now->next;
            }
        }
        return head;
    }
};