#include<vector>
#include<numeric>
#include<cassert>
using namespace std;

class Solution {
public:
    int pivotIndex(const vector<int>& nums) {
        auto left = 0, right = accumulate(nums.begin(), nums.end(), 0);
        for (auto i = 0; i < nums.size(); i++)
        {
            if (i > 0) left += nums[i - 1];
            right -= nums[i];
            if (left == right) return i;
        }
        return -1;
    }
};

int main() {
    assert(Solution().pivotIndex({ 1, 7, 3, 6, 5, 6 }) == 3);
    assert(Solution().pivotIndex({ 1, 2, 3 }) == -1);
    assert(Solution().pivotIndex({ 2, 1, -1 }) == 0);
}