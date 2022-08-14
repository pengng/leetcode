#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int smallestRangeI(const vector<int>& nums, int k) {
        auto smallest = *min_element(nums.begin(), nums.end());
        auto largest = *max_element(nums.begin(), nums.end());
        return max(largest - smallest - 2 * k, 0);
    }
};

int main() {
    assert(Solution().smallestRangeI({ 1 }, 0) == 0);
    assert(Solution().smallestRangeI({ 0,10 }, 2) == 6);
    assert(Solution().smallestRangeI({ 1,3,6 }, 3) == 0);
}