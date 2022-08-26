#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for (auto i = 0, j = i; i < nums.size() - 1; i++, j++)
        {
            while (j < nums.size() && nums[j] & 1) j++;
            if (j == nums.size()) break;
            else if (j != i) swap(nums[j], nums[i]);
        }
        return nums;
    }
};

int main() {
    vector<int> nums1{ 3,1,2,4 };
    assert(Solution().sortArrayByParity(nums1) == (vector<int>{2, 4, 3, 1}));

    vector<int> nums2{ 0 };
    assert(Solution().sortArrayByParity(nums2) == (vector<int>{0}));

    vector<int> nums3{ 0,1,2 };
    assert(Solution().sortArrayByParity(nums3) == (vector<int>{0, 2, 1}));
}