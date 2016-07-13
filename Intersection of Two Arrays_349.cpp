class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        for(auto i1 = nums1.begin(), i2 = nums2.begin(); i1 != nums1.end() && i2 != nums2.end(); )
        {
            if(*i1 == *i2)
            {
                if(res.size() == 0 || res.back() != *i1)
                {
                    res.push_back(*i1);
                }
                ++i1;
                ++i2;
            }
            else if(*i1 < *i2)
            {
                ++i1;
            }
            else
            {
                ++i2;
            }
        }
        return res;
    }
};