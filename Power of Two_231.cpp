class Solution {
public:
    bool isPowerOfTwo(int n) {
        int maxPowerOfTwo = std::pow(2, (int)(std::log(0x7FFFFFFF) / std::log(2)));
        return n >= 1 && (maxPowerOfTwo % n == 0);
    }
};
