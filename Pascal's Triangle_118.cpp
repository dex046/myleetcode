class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i = 0; i < numRows; ++i)
        {
            vector<int> vec;
            for(int j = 0; j <= i; ++j)
            {
                if(j == 0 || j == i)
                {
                    vec.push_back(1);
                }
                else if(i > 1)
                {
                    vec.push_back(res[i - 1][j - 1] + res[i - 1][j]);
                }
                else
                {
                    
                }
            }
            res.push_back(vec);
        }
        return res;
    }
};