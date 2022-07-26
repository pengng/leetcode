#include <vector>
#include <cassert>
using namespace std;

vector<int> counts;

class Solution {
public:
    Solution() {
        counts = vector<int>(100000, 0);
    }

    long long zeroFilledSubarray(const vector<int>& nums) {
        return count(nums, nums.size());
    }

    long long count(const vector<int>& nums, int n) {
        if (n == 0) return 0LL;

        int i = n - 1;
        if (n < 100000 && counts[n] > 0)
        {
            counts[i] = counts[n] - 1;
        }
        else
        {
            while (i >= 0 && nums[i] == 0)
                i--;
            counts[n - 1] = n - 1 - i;
        }

        return counts[n - 1] + count(nums, n - 1);
    }
};

int main() {
    assert(Solution().zeroFilledSubarray({ 1,3,0,0,2,0,0,4 }) == 6);
    assert(Solution().zeroFilledSubarray({ 0,0,0,2,0,0 }) == 9);
    assert(Solution().zeroFilledSubarray({ 2,10,2019 }) == 0);
}