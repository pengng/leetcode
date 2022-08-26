#include<vector>
#include<algorithm>
#include<cassert>
using namespace std;

class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        while (nums.size() != 1)
        {
            vector<int> newNums(nums.size() / 2);
            for (auto i = 0; i < newNums.size(); i++)
            {
                if (i % 2) newNums[i] = max(nums[i * 2], nums[i * 2 + 1]);
                else newNums[i] = min(nums[i * 2], nums[i * 2 + 1]);
            }
            nums = newNums;
        }
        return nums.front();
    }
};

int main() {
    vector<int> nums1{ 1,3,5,2,4,8,2,2 };
    assert(Solution().minMaxGame(nums1) == 1);

    vector<int> nums2{ 3 };
    assert(Solution().minMaxGame(nums2) == 3);
}