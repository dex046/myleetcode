class Solution {
public:
    bool isPowerOfThree(int n) {
        return n > 0 && (n == 1 || (n % 3 == 0 && isPowerOfThree(n / 3)));
    }
};


class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n < 3 && n != 1)
        {
            return false;
        }
        if(n == 1)
        {
            return true;
        }
        while(n)
        {
            if(n % 3)
            {
                return false;
            }
            else
            {
                n = n / 3;
                if(n == 1)
                {
                    return true;
                }
            }
        }
        return true;
    }
};

public boolean isPowerOfThree(int n) {
    int maxPowerOfThree = (int)Math.pow(3, (int)(Math.log(0x7fffffff) / Math.log(3)));
    return n>0 && maxPowerOfThree%n==0;
}