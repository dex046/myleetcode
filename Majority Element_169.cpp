class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};
//这种方法没办法判断是否有超过1/2的
class Solution {
public:
int majorityElement(vector<int> &num) {
         int cnt = 0, res;
    for (int i = 0; i < num.size(); ++i) {
        if (cnt == 0) res = num[i];
        if (res == num[i]) ++cnt;
        else --cnt;
    }
    return res;
}
};