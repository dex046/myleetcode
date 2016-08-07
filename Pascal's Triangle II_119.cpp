class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> temp;
        for(int i = 0; i <= rowIndex; ++i)
        {
            temp.push_back(0);
            for(int j = i; j >= 0; --j)
            {
                if(j == 0)
                {
                    temp[0] = 1;
                }
                else
                {
                    temp[j] = temp[j] + temp[j - 1];
                }
            }
        }
        return temp;
    }
};