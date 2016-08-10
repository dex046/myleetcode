class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        if(k <= 0)
            return ;
        reverse(nums.end() - k, nums.end());
        reverse(nums.begin(), nums.end() - k);
        reverse(nums.begin(), nums.end());
    }
};

class Solution {
public:
    void rotate(int nums[], int n, int k) {
	int tmp[n];
	if(k > n){
	    k %= n;
	}
	for (int i = 0; i < n; ++i){
		if (i < k){
			tmp[i] = nums[n + i - k];
		}
		else
		{
			tmp[i] = nums[i - k];
		}
	}
	for (int i = 0; i < n; ++i){
		nums[i] = tmp[i];
	}
}
};