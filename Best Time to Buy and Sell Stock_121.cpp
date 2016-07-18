class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int temp_sum = 0;
        for(int i = 1; i < prices.size(); ++i)
        {
            if(temp_sum >= 0)
            {
                if(prices[i] - prices[i-1] > 0)
                {
                    temp_sum += prices[i] - prices[i-1];
                    res = max(res, temp_sum);
                }
                else
                {
                    temp_sum += prices[i] - prices[i-1];
                }
            }
            else
            {
                if(prices[i] - prices[i-1] > 0)
                {
                    temp_sum = prices[i] - prices[i-1];
                    res = max(res, temp_sum);
                }
                else
                {
                    temp_sum = 0;
                }
            }
        }
        return res;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0, n = prices.size(), max_value = 0;
        for(int i = n - 1; i >= 0; --i)
        {
            result = max(result, max_value - prices[i]);
            max_value = max(max_value, prices[i]);
        }
        return result;
    }
};