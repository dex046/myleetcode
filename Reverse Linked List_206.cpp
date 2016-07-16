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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next)
        {
            return head;
        }
        ListNode* pro = head, *now = head->next, *temp = head;
        while(now)
        {
            temp = now->next;
            now->next = pro;
            pro = now;
            now = temp;
        }
        head->next = NULL;
        return pro;
    }
};