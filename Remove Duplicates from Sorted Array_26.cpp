class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator iter = unique(nums.begin(), nums.end());
        if(iter != nums.end())
            nums.erase(iter, nums.end());
        return nums.size();
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator iter = nums.begin();
        int temp = 0;
        int flag = 0;
        while(iter != nums.end())
        {
            if(flag && *iter == temp)
            {
                temp = *iter;
                iter = nums.erase(iter);
            }
            else if(flag == 0)
            {
                flag = 1;
                temp = *iter;
                ++iter;
            }
            else 
            {
                temp = *iter;
                ++iter;
            }
        }
        return nums.size();
    }
};