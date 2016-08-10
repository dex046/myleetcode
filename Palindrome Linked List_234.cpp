/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return true;
        ListNode *slow = head, *fast = head;
        ListNode *prev = NULL;
        while(fast && fast->next)
        {
            fast = fast->next->next;
            ListNode *temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        
        if(fast)
        {
            slow = slow->next;
        }
        
        while(prev && slow)
        {
            if(prev->val != slow->val)
            {
                return false;
            }
            prev = prev->next;
            slow = slow->next;
        }
        
        //if(prev != NULL || slow != NULL) return false;
        return true;
    }
}; 

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> sta;
        ListNode *first = head;
        if(!head)
            return true;
        int n = 1;
        while(first->next)
        {
            first = first->next;
            ++n;
        }
        first = head;
        for(int i = 0; i < n / 2; ++i)
        {
            sta.push(first->val);
            first = first->next;
        }
        int start;
        if(n % 2 == 0)
        {
            start = n / 2;
        }
        else
        {
            start = n / 2 + 1;
            first = first->next;
        }
        for(int i = start; i < n; ++i)
        {
            if(!sta.empty() && first && sta.top() == first->val)
            {
                sta.pop();
                first = first->next;
            }
            else
                return false;
        }
        return true;
    }
};