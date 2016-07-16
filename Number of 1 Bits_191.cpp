class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0; 
        for(res = 0; n; ++res)
        {
            n &= (n - 1);
        }
        return res;
    }
};