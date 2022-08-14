#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int maxProduct(const vector<int>& nums) {
        auto first = max(nums[0], nums[1]), second = min(nums[0], nums[1]);
        for (auto i = 2; i < nums.size(); i++)
            if (nums[i] > first)
            {
                second = first;
                first = nums[i];
            }
            else if (nums[i] > second)
            {
                second = nums[i];
            }
        return (first - 1) * (second - 1);
    }
};

int main() {
    assert(Solution().maxProduct({ 3,4,5,2 }) == 12);
    assert(Solution().maxProduct({ 1,5,4,5 }) == 16);
    assert(Solution().maxProduct({ 3,7 }) == 12);
}