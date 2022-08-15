#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
		for (auto i = 0; i < nums.size() - 1; i++)
		{
			auto j = i;
			while ((nums[j] ^ i) & 1) j++;
			if (j != i) swap(nums[i], nums[j]);
		}
		return nums;
    }
};

int main() {
	vector<int> nums1{ 4,2,5,7 };
	assert(Solution().sortArrayByParityII(nums1) == (vector<int>{4, 5, 2, 7}));

	vector<int> nums2{ 2,3 };
	assert(Solution().sortArrayByParityII(nums2) == (vector<int>{2, 3}));
}