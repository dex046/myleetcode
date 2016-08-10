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

class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length(), diff = 2*numRows - 2, aux = diff;
        string ret="";
        if(n <= 1 || numRows <= 1) return s;
        for(int i=0;i<numRows;i++, aux -= 2){
            if(i == 0 || i + 1 == numRows){
                for(int j=i;j<n;j+=diff) ret += s[j];
            }else{
                for(int j=i, aux2=aux;j<n;j+=aux2, aux2=diff-aux2) ret += s[j];
            }
        }
        return ret;
    }
};

class Solution {
public:
string convert(string s, int numRows)
{
    int row = numRows, i = 0;
    int len = s.length();
    if(len==1||numRows==1) return s;
    string convertion;
    int interval[3] = {0,0,0};
    interval[0] = (numRows - 2) * 2 + 2;
    while (row)
    {
        interval[2] = (numRows - row) * 2;
        interval[1] = interval[0] - interval[2];
        i = numRows - row;
        for (; i < len;)
        {
            if (interval[1] != 0)
            {
                convertion.append(1, s[i]);
            }
            i = i + interval[1];
            if (interval[2] != 0&&i<len)
            {
                convertion.append(1, s[i]);
            }
            i = i + interval[2];
        }
        row =row - 1;

    }
    return convertion;
}
};