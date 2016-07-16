class Solution {
public:
bool isAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}
};

//unordered_map比map速度快
class Solution {
public:
bool isAnagram(string s, string t) {
    unordered_map<char, int> help;
    int size = s.size();
    if(size != t.size())
        return false;
    for(size_t i = 0; i < size; ++i)
    {
        ++help[s[i]];
    }
    for(size_t i = 0; i < size; ++i)
    {
        if(--help[t[i]] < 0)
            return false;
    }
    return true;
}
};