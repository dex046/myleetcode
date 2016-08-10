class Solution {
public:
int strStr(string haystack, string needle) {
	int size_h = haystack.size(), size_n = needle.size();
	if (size_h == 0 && size_n == 0)
		return 0;
	int i = 0, j = 0;
	for (int i = 0; i < size_h; ++i)
	{
		int k = i;
		int j = 0;
		for (j = 0; i < size_h && j < size_n && size_h - i >= size_n - j; )
		{
			if (haystack[i] == needle[j])
			{
				++i;
				++j;
			}
			else
			{
				break;
			}
		}
		if (j >= size_n)
			return k;
		
		i = k;
	}
	return -1;
}
};