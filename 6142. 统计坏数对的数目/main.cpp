#include <vector>
#include <cassert>
#include <unordered_map>
using namespace std;

class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long count = 0LL;
        for (int i = 0; i < nums.size(); i++)
            nums[i] = i - nums[i];
        unordered_map<int, int> counts;
        for (auto num : nums)
            counts[num]++;

        int n = nums.size();
        for (int i = 0; i < nums.size() - 1; i++)
        {
            count += n - counts[nums[i]];
            n -= 1;
            counts[nums[i]]--;
        }
            /*for (int j = i + 1; j < nums.size(); j++)
                if (nums[j] != nums[i]) count++;*/

        return count;
    }
};

int main() {
    vector<int> nums1{ 4,1,3,3 };
    assert(Solution().countBadPairs(nums1) == 5LL);

    vector<int> nums2{ 1,2,3,4,5 };
    assert(Solution().countBadPairs(nums2) == 0LL);
}