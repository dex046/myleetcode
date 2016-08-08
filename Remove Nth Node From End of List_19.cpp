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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode* temp1 = head, *temp2 = head;
	int i = 0;
	for (i = 0; i <= n && temp1; ++i)
	{
		temp1 = temp1->next;
	}
	while (temp1 != NULL)
	{
		temp1 = temp1->next;
		temp2 = temp2->next;
	}
	if (i == n)
	{
		return head->next;
	}
	temp2->next = temp2->next->next;
	return head;
}
};