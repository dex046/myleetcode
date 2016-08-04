#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> num, vector<int> left, vector<int> right)
{
	vector<int> res;
	int i = 0, j = 0;
	while(i < left.size() && j < right.size())
	{
		if(left[i] <= right[j])
		{
			res.push_back(left[i++]);
		}
		else
		{
			res.push_back(right[j++]);
		}
	}
	while(i < left.size())
	{
		res.push_back(left[i++]);
	}
	while(j < right.size())
	{
		res.push_back(right[j++]);
	}
	return res;
}
vector<int> merge_sort(vector<int> num, int start, int end)
{
	if(start == end)
	{
		vector<int> res;
		res.push_back(num[start]);
		return res;
	}
	int mid = (start + end) / 2;
	vector<int> left = merge_sort(num, start, mid);
	vector<int> right = merge_sort(num, mid + 1, end);
	return merge(num, left, right);
}
int main()
{
	vector<int> vec = {10, 11, 8, 7, 5, 16, 9};
	vec = merge_sort(vec, 0, vec.size() - 1);
	for(auto i : vec)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}