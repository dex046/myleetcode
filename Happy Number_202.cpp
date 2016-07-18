class Solution {
public:
map<int, int> hmap;
bool isHappy(int n) {
    int res = 0;
    while(n)
    {
        int m = n % 10;
        res += m * m;
        n /= 10;
    }
    if(res == 1)
        return true;
    if(hmap.find(res) != hmap.end())
        return false;
    else
        hmap[res] = 1;
    return isHappy(res);
}
};

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> mmap;
        int res = 0;
        while(true)
        {
            res = 0;
            while(n)
            {
                res += pow(n % 10, 2);
                n = n / 10;
            }
            n = res;
            if(n == 1)
            {
                return true;
            }
            if(mmap.find(res) == mmap.end())
            {
                mmap[res] = 1;
            }
            else
            {
                return false;
            }
        }
        return false;
    }
};