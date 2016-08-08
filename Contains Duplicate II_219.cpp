class Solution {
public:
bool containsNearbyDuplicate(vector<int>& nums, int k) {
    int size = nums.size();
    unordered_map<int, int> unmap;
    for(int i = 0; i < size; ++i)
    {
        if(unmap.find(nums[i]) != unmap.end() && i - unmap[nums[i]] <= k)
        {
            return true;
        }
        unmap[nums[i]] = i;
    }
    return false;
}
};