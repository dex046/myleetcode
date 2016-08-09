class Solution {
public:
bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
    set<int> window; // set is ordered automatically 
    for (int i = 0; i < nums.size(); i++) {
        if (i > k) window.erase(nums[i-k-1]); // keep the set contains nums i j at most k
        // -t <= x - nums[i] <= t;
        auto pos = window.lower_bound(nums[i] - t); // x >= nums[i] - t
        if (pos != window.end() && *pos - nums[i] <= t) // x <= nums[i] + t
               return true;
        window.insert(nums[i]);
    }
    return false;
}
};

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        vector<pair<int, int>> vec;
        for(int i = 0; i < nums.size(); ++i)
        {
            vec.push_back({nums[i], i});
        }
        sort(vec.begin(), vec.end(), [](const pair<int, int> &a, const pair<int, int> &b){return a.first < b.first;});
        
        int fast = 0, slow = 0;
        for(fast = 1; fast < nums.size(); ++fast)
        {
            while((long long)vec[fast].first - vec[slow].first > t) ++slow;//注意内存越界的问题
            for(int i = slow; i < fast; ++i)
            {
                if(abs(vec[fast].second - vec[i].second) <= k)
                {
                    return true;
                }
            }
        }
        return false;
    }
};