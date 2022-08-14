#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2)
            sum += nums[i];
        return sum;
    }
};

int main() {
    vector<int> nums1{ 1,4,3,2 };
    assert(Solution().arrayPairSum(nums1) == 4);

    vector<int> nums2{ 6,2,6,5,1,2 };
    assert(Solution().arrayPairSum(nums2) == 9);
}