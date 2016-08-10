class Solution {
public:
int lengthOfLastWord(string s) {
	string str = "";
	istringstream in(s);
	int res = 0;
	while (getline(in, str, ' '))
	{
		if (str.size() == 0)
		{
			continue;
		}
		res = str.size();
		
	}
	return res;
}
};


class Solution {
public:
int lengthOfLastWord(string s) {
	int sum = 0;
	int size = s.length();
	int i = size - 1;
	while(s[i] == ' ')
	{
		--i;
	}
	for(; i >= 0; --i)
	{
		if(s[i] != ' ')
		{
			++sum;
		}
		else{
			break;
		}
	}
	return sum;
}
};