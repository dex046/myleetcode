// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
int solve_bad(int low, int high)
{
    if(low >= high)
    {
        return high;
    }
    int mid = ((long)low + (long)high) / 2;
    if(isBadVersion(mid))
    {
        return solve_bad(low ,mid);
    }
    else
    {
        return solve_bad(mid + 1, high);
    }
}
    int firstBadVersion(int n) {
        return solve_bad(1, n);
    }
};