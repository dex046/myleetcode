class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto iter = nums.begin();
        int length = nums.size();
        while(iter != nums.end())
        {
            if(*iter == val)
            {
                iter = nums.erase(iter);
                --length;
            }
            else
            {
                ++iter;
            }
        }
        return length;
    }
};