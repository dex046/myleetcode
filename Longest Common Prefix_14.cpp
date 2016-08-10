class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";
            
        int i = 0;
        for(i = 0; i < strs[0].length(); ++i)
        {
            char ch = strs[0][i];
            for(int j = 1; j < strs.size(); ++j)
            {
                if(strs[j].size() <= i || strs[j][i] != ch)
                {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0].substr(0, i+1);
    }
};


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len=strs.size();
        if(len==0) return "";
        string tmp=strs[0];
        int tmplen=tmp.length();
        for(int i=0;i<len;i++)
        while(tmp.compare(0,tmplen,strs[i],0,tmplen)!=0&&tmplen>=0)//c++14
		//while(tmp.compare(0,tmplen,strs[i].substr(0, tmplen))!=0&&tmplen>=0)
            tmplen--;
        return tmp.substr(0,tmplen);
    }
};


class Solution {
public:
string longestCommonPrefix(vector<string>& strs) {
    int size = strs.size();
    if(size == 0)
    {
        return "";
    }
    if(size == 1)
    {
        return strs[0];
    }
    int num = -1;
    int i = 0, j = 0;
    while(i < size)
    {
        if(i == size - 1)
        {
            num = j;
            i = 0;
            ++j;
        }
        else if(j < strs[i].size() && j < strs[i+1].size() && strs[i][j] == strs[i+1][j])
        {
            ++i;
        }
        else
        {
            break;
        }
    }
    return strs[0].substr(0, num+1);
}
};

