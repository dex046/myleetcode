class Solution {
public:
    int climbStairs(int n) {
        int *dpn = new int[n];
        dpn[0] = 1;
        dpn[1] = 2;
        for(int i = 2; i < n; ++i)
        {
            dpn[i] = dpn[i - 2] + dpn[i - 1];
        }
        return dpn[n - 1];
    }
};

class Solution {
public:
    int climbStairs(int n) {
        int first = 1, second = 2;
        if(n == 1)
        {
            return first;
        }
        if(n == 2)
        {
            return second;
        }
        int third = 0;
        for(int i = 2; i < n; ++i)
        {
            third = first + second;
            first = second;
            second = third;
        }
        return third;
    }
};