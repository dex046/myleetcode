class Solution {
public:
    string countAndSay(int n) {
        string res = "1", str = "1";
        int cnt = 0;
        char temp = '0';
        for(int i = 1; i < n; ++i)
        {
            int cnt = 0;
            char temp = '0';
            res = "";
            for(int i = 0; i < str.size(); ++i)
            {
                if(temp == str[i])
                {
                    cnt++;
                }
                else
                {
                    if(cnt != 0)
                    {
                        res += to_string(cnt) + temp;
                    }
                    
                    temp = str[i];
                    cnt = 1;
                }
            }
            if(cnt != 0)
            {
                res += to_string(cnt) + temp;
            }
            str = res;
        }
        return res;
    }
};


class Solution {
public:
     string helper(string s){
    char c = s[0];
    int count = 1;
    stringstream ss;
    for(int i = 1; i < s.size(); i ++){
        if(s[i] != c){
            ss << count << c;
            c = s[i];
            count = 1;
        }else{
            count ++;
        }
    }
    
    ss << count << c;
    return ss.str();
}

string countAndSay(int n) {
    string str = "1";
    for(int i = 1; i < n; i ++ ){
        str = helper(str);
    }
    return str;
}
};



class Solution {
public:
string countAndSay(int n) {
    if(n == 1)
        return "1";
    string res;
    vector<pair<int, int>> temp;
    int num = 0, rep, size = n;
    char former = ' ';
    string str = "1";
    for(int i = 0; i < size - 1; ++i)
    {
        while(!str.empty())
        {
            if(str.back() == former)
            {
                ++num;
                str.pop_back();
            }
            else
            {
                if(former != ' ')
                    temp.push_back({former - '0', num});
                former = str.back();
                num = 1;
                str.pop_back();
            }
        }
        temp.push_back({former - '0', num});
        former = ' ';
        num = 0;
        while(!temp.empty())
        {
            pair<int, int> t = temp.back();
            str += t.second + '0';
            str += t.first + '0';
            temp.pop_back();
        }

    }

    return str;
}
};