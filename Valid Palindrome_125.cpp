class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        int left = 0, right = size - 1;
        
        while(left < right)
        {
            while(left < size && !isalnum(s[left])) ++left;
            while(right > -1 && !isalnum(s[right])) --right;
            if(left < right && tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }
            else
            {
                ++left;
                --right;
            }
        }
        return true;
    }
};


class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        int i = 0, j = size - 1;
        for(; i < size && j >= i; )
        {
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
            {
                if(s[j] >= 'a' && s[j] <= 'z' || s[j] >= 'A' && s[j] <= 'Z')
                {
                    if(s[i] == s[j] || abs(s[i] - s[j]) == abs('A' - 'a'))
                    {
                        ++i;
                        --j;
                        continue;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    --j;
                }
            }
            else
            {
                ++i;
            }
        }
        return i > j;
    }
};