#include <vector>
#include <cassert>
#include <algorithm>
#include <functional>
#include <numeric>
using namespace std;

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        auto sum = accumulate(nums.begin(), nums.end(), 0);
        sort(nums.begin(), nums.end());
        auto half = sum / 2;
        vector<int> result;
        sum = 0;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            sum += nums[i];
            result.push_back(nums[i]);
            if (sum > half) break;
        }
        return result;
    }
};

int main() {
    vector<int> nums1{ 4,3,10,9,8 };
    assert(Solution().minSubsequence(nums1) == (vector<int>{10, 9}));

    vector<int> nums2{ 4,4,7,6,7 };
    assert(Solution().minSubsequence(nums2) == (vector<int>{7, 7, 6}));

    vector<int> nums3{ 6 };
    assert(Solution().minSubsequence(nums3) == (vector<int>{6}));
}