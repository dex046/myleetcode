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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* first = head, *prio = head;
        while(first)
        {
            if(first->val == val)
            {
                if(first == head)
                {
                    first = first->next;
                    head = first;
                    prio = first;
                }
                else
                {
                    prio->next = first->next;
                    first = first->next;
                }
            }
            else
            {
                if(first != prio)
                    prio = prio->next;
                first = first->next;
            }
        }
        return head;
    }
};