class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums.end() != unique(nums.begin(), nums.end());
    }
};
class Solution {
public:
bool containsDuplicate(vector<int>& nums) {
    int cont[0xFFFFF] = {};
    bool withDuplicates = false;
    for(int i = 0; i < nums.size(); ++i)
    {
        if(cont[nums[i]])
        {
            withDuplicates = true;
            break;
        }
        else
        {
            cont[nums[i]] = 1;
        }
    }
    return withDuplicates;
}
};
class Solution {
public:
bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> cont;
    for(int i = 0; i < nums.size(); ++i)
    {
        if(cont.find(nums[i]) != cont.end())
        {
            return true;
        }
        else
        {
            cont[nums[i]] = 1;
        }
    }
    return false;
}
};