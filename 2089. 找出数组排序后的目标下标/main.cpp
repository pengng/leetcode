#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] == target)
                result.push_back(i);
        return result;
    }
};

int main() {
    vector<int> nums1{ 1,2,5,2,3 };
    Solution().targetIndices(nums1, 2);

    vector<int> nums2{ 1,2,5,2,3 };
    Solution().targetIndices(nums2, 3);

    vector<int> nums3{ 1,2,5,2,3 };
    Solution().targetIndices(nums3, 5);

    vector<int> nums4{ 1,2,5,2,3 };
    Solution().targetIndices(nums4, 4);
}