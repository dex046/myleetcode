class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> res;
        for(int i = 0, j = 0; i < nums1.size() && j < nums2.size(); )
        {
            if(nums1[i] == nums2[j])
            {
                res.push_back(nums1[i]);
                ++i;
                ++j;
            }
            else if(nums1[i] < nums2[j])
            {
                ++i;
            }
            else
            {
                ++j;
            }
        }
        return res;
    }
};

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> dict;
        for(int i = 0; i < nums1.size(); ++i)
        {
            ++dict[nums1[i]];
        }
        for(int i = 0; i < nums2.size(); ++i)
        {
            if(--dict[nums2[i]] >= 0)
            {
                res.push_back(nums2[i]);
            }
        }
        return res;
    }
};