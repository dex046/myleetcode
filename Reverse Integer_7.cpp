class Solution {
public:
int reverse(int x) {
    long res = 0;
    if(x == -0)
        return -0;
    while(x)
    {
        res = res * 10 + x % 10;
        x /= 10;
    }
    if(res > INT_MAX)
        return 0;
    else if(res < INT_MIN)
        return 0;
    return res;
}
};