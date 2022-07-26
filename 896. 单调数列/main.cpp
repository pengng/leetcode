#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    bool isMonotonic(const vector<int>& nums) {
        if (nums.size() < 3) return true;

        int sign = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            int diff = nums[i] - nums[i - 1];
            if (diff * sign < 0) return false;

            if (diff > 0) sign = 1;
            else if (diff < 0) sign = -1;
        }

        return true;
    }
};

int main() {
    assert(Solution().isMonotonic({ 1,2,2,3 }));
    assert(Solution().isMonotonic({ 6, 5, 4, 4 }));
    assert(Solution().isMonotonic({ 1, 3, 2 }) == false);
}