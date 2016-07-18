class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
        {
            return head;
        }
        ListNode *fast = head->next, *slow = head, *prio = NULL, *res = head->next;
        while(fast)
        {
            slow->next = fast->next;
            fast->next = slow;
            if(prio)
            {
                prio->next = fast;
                prio = slow;
            }
            else
            {
                prio = slow;
            }
            
            if(slow->next && slow->next->next)
            {
                fast = slow->next->next;
                slow = slow->next;
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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
        {
            return head;
        }
        ListNode *fast = head->next, *slow = head;
        while(fast)
        {
            int temp = fast->val;
            fast->val = slow->val;
            slow->val = temp;
            
            if(fast->next && fast->next->next)
            {
                slow = fast->next;
                fast = fast->next->next;
            }
            else
            {
                break;
            }
        }
        return head;
    }
};