class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for(int i = 0; i < 32; ++i)
        {
            res = (res << 1) + (n >> i & 1);
        }
        return res;
    }
};

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
	list<int> L;
	while (n != 0){
		L.push_back(n % 2);
		n /= 2;
	}
	int i = 32 - L.size(), j = 0;
	while (j < i){
		L.push_back(0);
		++j;
	}
	j = 0;
	int result = 0;
	int temp = 1;
	while (j < 32){
		i = L.back();
		L.pop_back();
		if (i == 1){
			result += temp;
		}
		temp *= 2;
		j++;
	}
	return result;
}
};