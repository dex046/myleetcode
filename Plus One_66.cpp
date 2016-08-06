class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        int temp = 1;
        for(int i = digits.size() - 1; i >= 0; --i)
        {
            temp = digits[i] + temp;
            if(temp > 9)
            {
                res.push_back(temp % 10);
            }
            else
            {
                res.push_back(temp);
            }
            temp = temp / 10;
        }
        if(temp != 0)
        {
            res.push_back(temp % 10);
        }
        return vector<int>(res.rbegin(), res.rend());
    }
};