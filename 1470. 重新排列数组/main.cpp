#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        for (int i = 0; i < n; i++)
        {
            result.push_back(nums[i]);
            result.push_back(nums[i + n]);
        }
        return result;
    }
};

int main() {
    vector<int> nums1{ 2,5,1,3,4,7 };
    Solution().shuffle(nums1, nums1.size() / 2);

    vector<int> nums2{ 1,2,3,4,4,3,2,1 };
    Solution().shuffle(nums2, nums2.size() / 2);

    vector<int> nums3{ 1,1,2,2 };
    Solution().shuffle(nums3, nums3.size() / 2);

    vector<int> nums4{ 7,5,9,7,5,8,10,4,3,3,2,5,9,10 };
    Solution().shuffle(nums4, nums4.size() / 2);
}