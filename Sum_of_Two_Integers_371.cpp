class Solution {
public:
//We can use a ^ b to get the bits of the sum without considering the carry bits.
//We can get carry bits by using a & b like the operation above.
//So it become the sub - problem.We need to calculate the sum of(a^b) and(a & b) << 1.
//When the carry bits if zero, the function will return.
int getSum(int a, int b) {
	if (a&b)
	{
		return getSum((a & b) << 1, a ^ b);
	}
	else
	{
		return a | b;
	}
	//at most 32 recursive calls, after which a will become 0
	/*char *p = 0;
	p = &p[a]; cout << (long long)&p[a] << endl;
	p = &p[b]; cout << (long long)&p[b] << endl;
	return (long long)p;*/
	//return (long long)&((&((char*)0)[a])[b]);
	//this doesn't try to read the data, but only calculate the address
}
};