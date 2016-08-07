//most fast
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || x!= 0 && x % 10 == 0)
        {
            return false;
        }
        int half = 0;
        while(x > half)
        {
            half = half * 10 + x % 10;
            x /= 10;
        }
        if(x == half || half / 10 == x)
        {
            return true;
        }
        return false;
    }
};


class Solution {
public:
    bool isPalindrome(int x) {
        int res = 0;
        if(x < 0)
            return false;
        int start = x;
        while(x)
        {
            int temp = x % 10;
            res = res * 10 + temp;
            x /= 10;
        }
        return res == start;
    }
};

class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> vec;
        if(x < 0)
        {
            return false;
        }
        while(x)
        {
            vec.push_back(x % 10);
            x /= 10;
        }
        vector<int> res(vec.rbegin(), vec.rend());
        return res == vec;
    }
};