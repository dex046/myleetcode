#include <iostream>
#include <vector>
using namespace std;
void quick_sort(vector<int>& vec, int i, int j)
{
	if(vec.size() < 2)
	{
		return;
	}
	if(i >= j)
	{
		return;
	}
	
	int key = vec[i];
	int ii = i, jj = j;
	bool flag = true;
	while(ii <= j && jj >= i && ii < jj)
	{
		if(flag)
		{
			if(vec[jj] < key)
			{
				vec[ii] = vec[jj];
				++ii;
				flag = false;
			}
			else
			{
				--jj;
			}
		}
		else
		{
			if(vec[ii] > key)
			{
				vec[jj] = vec[ii];
				--jj;
				flag = true;
			}
			else
			{
				++ii;
			}
		}
	}
	
	
	if(ii == jj)
	{
		vec[ii] = key;
	}
	quick_sort(vec, i, jj - 1);
	quick_sort(vec, ii + 1, j);
}

//链表的快速排序
struct ListNode
{
	int value;
	ListNode *next;
public:
	ListNode(int value)
	{
		this->value = value;
		this->next = NULL;
	}
};
void quick_sort_list(ListNode *num, ListNode *first, ListNode *second)
{
	ListNode *fast = first, *slow = first, *temp = first;
	if(!first || !first->next || first->next == second || first == second)
	{
		return;
	}
	int key = first->value;
	while(fast != second)
	{
		if(fast->value < key)
		{
			//slow->value = fast->value;
			swap(slow->value, fast->value);
			if(slow->value == key)
			{
				temp = slow;
			}
			else if(fast->value == key)
			{
				temp = fast;
			}
			slow = slow->next;
		}
		fast = fast->next;
	}
	
	swap(slow->value, temp->value);
	quick_sort_list(num, first, slow);
	quick_sort_list(num, slow->next, second);
}

int main()
{
	// vector<int> vec = {3, 11, 8, 7, 5, 16, 9};
	// quick_sort(vec, 0, vec.size() - 1);
	// for(auto i : vec)
	// {
		// cout << i << " ";
	// }
	// cout << endl;
	ListNode *n1 = new ListNode(5);
	ListNode *n2 = new ListNode(11);
	ListNode *n3 = new ListNode(12);
	ListNode *n4 = new ListNode(13);
	ListNode *n5 = new ListNode(9);
	ListNode *n6 = new ListNode(16);
	ListNode *n7 = new ListNode(7);
	
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = n7;
	
	quick_sort_list(n1, n1, NULL);
	ListNode *nn = n1;
	while(nn)
	{
		cout << nn->value << " ";
		nn = nn->next;
	}
	cout << endl;
	return 0;
}