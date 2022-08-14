#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - 1] * nums[nums.size() - 2] - nums[0] * nums[1];
    }
};

int main() {
    vector<int> nums1{ 5,6,2,7,4 };
    assert(Solution().maxProductDifference(nums1) == 34);

    vector<int> nums2{ 4,2,5,9,7,4,8 };
    assert(Solution().maxProductDifference(nums2) == 64);
}