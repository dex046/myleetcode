class Solution {
public:
    int compareVersion(string version1, string version2) {
        int v1 =0, v2=0;
	int value = 0;
	for (size_t i = 0; i < version1.size(); ++i)
		if (version1[i] == '.')
			version1[i] = ' ';
	for (size_t i = 0; i < version2.size(); ++i)
		if (version2[i] == '.')
			version2[i] = ' ';
	istringstream ss1(version1);
    istringstream ss2(version2);
	while (ss1.rdbuf()->in_avail() > 0 || ss2.rdbuf()->in_avail() > 0)
	{
		ss1 >> v1;
		ss2 >> v2;
		
		if (v1 > v2) return 1;
		else if (v1 < v2) return -1;
		v1 = 0;
		v2 = 0;
	}
	return 0;
    }
};


class Solution {
public:
int compareVersion(string version1, string version2) {
	istringstream in1(version1);
	istringstream in2(version2);
	string str1_first = "", str1_second = "", str2_first = "", str2_second = "";

	int num1 = 0, num2 = 0;
	while (1)
	{
		getline(in1, str1_first, '.'); 
		getline(in2, str2_first, '.');
		if (str1_first.size() > 0)
			num1 = stoi(str1_first);

		if (str2_first.size() > 0)
			num2 = stoi(str2_first);

		if (str1_first.size() > 0 || str2_first.size() > 0)
		{
			if (num1 > num2)
			{
				return 1;
			}
			else if (num1 < num2)
			{
				return -1;
			}
			else
			{
				num1 = 0, num2 = 0;
				str1_first = "";
				str2_first = "";
				continue;
			}
		}
		else
		{
			return 0;
		}
		
	}
	return 0;

}
};