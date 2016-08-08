class Solution {
public:
    bool isIsomorphic(string s, string t) {
        array<char, 128> dict_s{0}, dict_t{0};
        for(int i = 0; i < s.size(); ++i)
        {
            if(dict_s[s[i]] == 0 && dict_t[t[i]] == 0)
            {
                dict_s[s[i]] = t[i];
                dict_t[t[i]] = s[i];
            }
            else if(dict_s[s[i]] == 0 || dict_t[t[i]] == 0)
            {
                return false;
            }
            else if(dict_s[s[i]] == t[i] && dict_t[t[i]] == s[i])
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())
            return false;
        map<char, char> stot;
        map<char, char> ttos;
        for(int i = 0; i < s.size(); ++i)
        {
            auto iter_s = stot.find(s[i]);
            auto iter_t = ttos.find(t[i]);
            if(iter_s == stot.end() && iter_t == ttos.end())
            {
                stot[s[i]] = t[i];
                ttos[t[i]] = s[i];
            }
            else if(iter_s == stot.end() || iter_t == ttos.end())
            {
                return false;
            }
            else
            {
                if(stot[s[i]] != t[i] || ttos[t[i]] != s[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};