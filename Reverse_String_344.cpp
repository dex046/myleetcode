class Solution {
public:
    string reverseString(string s) {
        for(auto i = s.begin(), j = --s.end(); i < j; ++i,--j)
        {
            // char temp = *i;
            // *i = *j;
            // *j = temp;
            swap(*i, *j);
        }
        return s;
    }
};
