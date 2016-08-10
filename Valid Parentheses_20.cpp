class Solution {
public:
    bool isValid(string s) {
        stack<char> sta;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                sta.push(s[i]);
            }
            else
            {
                if(sta.empty())
                {
                    return false;
                }
                char top_c = sta.top();
                switch(s[i])
                {
                    case ')': if(top_c != '(') return false;break;
                    case ']': if(top_c != '[') return false;break;
                    case '}': if(top_c != '{') return false;break;
                }
                
                sta.pop();
            }
        }
        return sta.empty();
    }
};