class NumArray {
private:
    vector<int> result;
public:
    NumArray(vector<int> &nums) {
        int n = nums.size();
        result.resize(n, 0);
        int sum = 0;
        for(int i = 0; i < n; ++i)
        {
            result[i] = sum + nums[i];
            sum = result[i];
        }
    }

    int sumRange(int i, int j) {
        if(i == 0)
        {
            return result[j];
        }
        else
        {
            return result[j] - result[i - 1];
        }
    }
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);