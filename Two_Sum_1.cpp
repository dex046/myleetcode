class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int, int> mm;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(mm.find(target - nums[i]) == mm.end())
            {
                mm[nums[i]] = i;
            }
            else
            {
                res.push_back(mm[target - nums[i]]);
                res.push_back(i);
                break;
            }
        }
        
        return res;
    }
};