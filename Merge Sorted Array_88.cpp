class Solution {
public:
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	if (n == 0)
		return;
	vector<int>::iterator i;
	vector<int>::iterator j = nums2.begin();
	int size_1 = nums1.size();
	for (int k = 0; k < size_1 - m; ++k)
		nums1.pop_back();
	for (i = nums1.begin(); i != nums1.end() && j != nums2.end();)
	{
		for (j = nums2.begin(); i != nums1.end() && j != nums2.end();)
		{
			if (*i < *j)
			{
				++i;
			}
			else
			{
				int temp = i - nums1.begin();
				nums1.insert(i, *j++);
				i = nums1.begin() + temp + 1;
			}
		}
	}
	for (; j != nums2.end(); ++j)
	{
		nums1.push_back(*j);
	}
}
};