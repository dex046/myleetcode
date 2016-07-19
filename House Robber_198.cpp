class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int size = nums.size();
        int take = 0, notake = 0, res = 0;
        for(int i = 0; i < size; ++i)
        {
            take = nums[i] + notake;
            notake = res;
            res = max(take, notake);
        }
        return res;
    }
};

class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        if(size == 0)
        {
            return 0;
        }
        if(size == 1)
        {
            return nums[0];
        }
        for(int i = 1; i < nums.size(); ++i)
        {
            if(i > 1)
            {
                nums[i] += nums[i - 2];
            }
            nums[i] = max(nums[i-1], nums[i]);
        }
        return max(nums[size - 1], nums[size - 2]);
    }
};