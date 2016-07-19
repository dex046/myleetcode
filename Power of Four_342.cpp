class Solution {
public:
    bool isPowerOfFour(int num) {
        int temp = sqrt(num);
        return num > 0 && temp * temp == num && (temp&(temp-1)) == 0;//位操作优先级没有==高
    }
};

class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num != 0 && num % 4 == 0)
        {
            return isPowerOfFour(num / 4);
        }
        else if(num == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};