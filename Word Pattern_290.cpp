class Solution {
public:
    bool wordPattern(string pattern, string str) {
        if(pattern.size() == 0)
            return false;
        map<char, string> cnt_c;
        map<string, char> cnt_str;
        istringstream in(str);
        for(int i = 0; i < pattern.size(); ++i)
        {
            string temp;
            if(getline(in, temp, ' ') && temp != "")
            {
                if(cnt_c.find(pattern[i]) == cnt_c.end() && cnt_str.find(temp) == cnt_str.end())
                {
                    cnt_c[pattern[i]] = temp;
                    cnt_str[temp] = pattern[i];
                }
                else if(cnt_c.find(pattern[i]) != cnt_c.end() && cnt_str.find(temp) != cnt_str.end())
                {
                    if(cnt_c[pattern[i]] != temp || cnt_str[temp] != pattern[i])
                    {
                        return false;
                    }
                    
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
            
            if (i == pattern.size() - 1 && getline(in, temp, ' '))
	    	{
			    return false;
	    	}
        }
        return true;
    }
};


class Solution {
public:
bool wordPattern(string pattern, string str) {
	int size_str = str.size();
	int size_pattern = pattern.size();
	int start = 0, j = 0;
	map<char, string> mmap;
	map<string, char> mmap2;
	for (int i = 0; i < size_str && start < size_str; ++i)
	{
		if (str[i] == ' ')
		{
			string temp = str.substr(start, i - start);
			start = i + 1;
			if (j < size_pattern)
			{
				if (mmap.find(pattern[j]) != mmap.end())
				{
					if (mmap2.find(temp) != mmap2.end())
					{
						if (mmap[pattern[j]] != temp || mmap2[temp] != pattern[j])
						{
							return false;
						}
						else
						{
							++j;
							continue;
						}
					}
					else
					{
						return false;
					}
				}
				else
				{
					if (mmap2.find(temp) != mmap2.end())
					{
						return false;
					}
					mmap[pattern[j]] = temp;
					mmap2[temp] = pattern[j];
					++j;
					continue;
				}
			}
			else
			{
				return false;
			}
		}
	}
	//return true;
	string temp = str.substr(start, size_str - start);
	//start = i + 1;
	if (j == size_pattern - 1)
	{
		if (mmap.find(pattern[j]) != mmap.end())
		{
			if (mmap2.find(temp) != mmap2.end())
			{
				if (mmap[pattern[j]] != temp || mmap2[temp] != pattern[j])
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			if (mmap2.find(temp) != mmap2.end())
			{
				return false;
			}
			else return true;
			//continue;
		}
	}
	else
	{
		return false;
	}

	//return j == size_pattern;
}
};