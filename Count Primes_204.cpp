class Solution {
public:
    int countPrimes(int n) {
        int res = n / 2;//偶数肯定不是质数(除了2),1不是质数
        if(n <= 2)
            return 0;
        int m = sqrt(n);
        vector<bool> isprime(n, false);
        isprime[1] = true;//1不是质数
        for(int i = 3; i <= m; i+=2)
        {
            for(int step = i << 1, j = i * i; j < n; j += step)//奇数中的质数都是由比它小的奇数相乘得到 step是为了避开偶数
            {
                if(!isprime[j])
                {
                    isprime[j] = true;
                    res--;
                }
            }
        }
        return res;
    }
};