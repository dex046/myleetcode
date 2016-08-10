class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> vec(numRows);
        int i = 0;
        bool flag = true;
        for(char a : s)
        {
            vec[i].push_back(a);
            if(numRows != 1)
            {
                if(flag)
                {
                    if(i < numRows - 1)
                    {
                        ++i;
                    }
                    else
                    {
                        --i;
                        flag = false;
                    }
                }
                else
                {
                    if(i > 0)
                    {
                        --i;
                    }
                    else
                    {
                        ++i;
                        flag = true;
                    }
                }
            }
        }
        
        string res = "";
        for(string str : vec)
        {
            for(char a : str)
            res.push_back(a);
        }
        
        return res;
    }
};