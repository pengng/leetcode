#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n < 2) return n;

        vector<int> nums(n + 1);
        nums[1] = 1;

        for (int i = 2; i <= n; i++)
        {
            nums[i] = nums[i / 2];
            if (i % 2 != 0) nums[i] += nums[i / 2 + 1];
        }

        return *max_element(nums.begin(), nums.end());
    }
};

int main() {
    assert(Solution().getMaximumGenerated(7) == 3);
    assert(Solution().getMaximumGenerated(2) == 1);
    assert(Solution().getMaximumGenerated(3) == 2);
    assert(Solution().getMaximumGenerated(0) == 0);
}