class Solution {
public:
    string reverseVowels(string s) {
        set<char> mset = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for(int i = 0, j = s.size() - 1; i < s.size() && j >= 0 && i < j; )
        {
            if(mset.find(s[i]) != mset.end())
            {
                if(mset.find(s[j]) != mset.end())
                {
                    char temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                    ++i;
                    --j;
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
        return s;
    }
};


class Solution {
public:
    string reverseVowels(string s) {
        int size = s.size();
        for(int i = 0, j = size - 1; i < j; )
        {
            while(j > i && !(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' 
            || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U'))
            {
                ++i;
                continue;
            }
            
            while(j > i && !(s[j] == 'a' || s[j] == 'A' || s[j] == 'e' || s[j] == 'E' || s[j] == 'i' 
            || s[j] == 'I' || s[j] == 'o' || s[j] == 'O' || s[j] == 'u' || s[j] == 'U'))
            {
                --j;
                continue;
            }
            
            if(i < j)
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                ++i;
                --j;
            }
            else
            {
                break;
            }
            
        }
        
        return s;
    }
};