class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto iter = remove(nums.begin(), nums.end(), 0);
        fill(iter, nums.end(), 0);
    }
};
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        for(int i = 0; i < size; )
        {
            if(nums[i] == 0)
            {
                nums.erase(nums.begin() + i);
                nums.push_back(0);
                --size;
            }
            else
            {
                ++i;
            }
        }
    }
};