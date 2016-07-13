class Solution {
public:
    bool canWinNim(int n) {
        return n % 4;
		//TIME EXCEED LIMIT
        // bool first = true, second = true, third = true, now = false;
        // if(n < 4)
        // {
        //     return true;
        // }
        // for(int i = 3; i < n; ++i)
        // {
        //     now = (first && second && third) ? false : true;
        //     first = second;
        //     second = third;
        //     third = now;
        // }
        // return now;
        
        //MEMORY EXCEED LIMIT
        // bool *num = new bool[n];
        // num[0] = num[1] = num[2] = true;
        // for(int i = 3; i < n; ++i)
        // {
        //     if(num[i-1] && num[i-2] && num[i-3])
        //     {
        //         num[i] = false;
        //     }
        //     else
        //     {
        //         num[i] = true;
        //     }
        // }
        // return num[n-1];
    }
};