// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int maxnum = n, minnum = 1;
        
        while(1)
        {
            int meannum = (maxnum - minnum) / 2 + minnum;
            // Do NOT use (maxNumber+minNumber)/2 in case of over flow
            int res = guess(meannum);
            if(res == 0)
                return meannum;
            else if(res == 1)
            {
                minnum = meannum + 1;
            }
            else
            {
                maxnum = meannum - 1;
            }
            
        }
    }
};