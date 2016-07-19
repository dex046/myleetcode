class Solution {
public:
    bool isPowerOfTwo(int n) {
        int maxPowerOfTwo = std::pow(2, (int)(std::log(0x7FFFFFFF) / std::log(2)));
        return n >= 1 && (maxPowerOfTwo % n == 0);
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && (n&(n-1)) == 0;
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n == 1 || n > 1 && (n % 2 == 0 && isPowerOfTwo(n / 2));
    }
};
