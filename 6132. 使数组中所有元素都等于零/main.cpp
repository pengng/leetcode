#include <vector>
#include <climits>
#include <cassert>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
		int count = 0;
		while (true)
		{
			int smallest = INT_MAX;
			for (auto& num : nums)
				if (num > 0 && num < smallest) smallest = num;
			if (smallest == INT_MAX) break;
			for (int i = 0; i < nums.size(); i++)
				if (nums[i] > 0) nums[i] -= smallest;
			count++;
		}
		return count;
    }
};

int main() {
	vector<int> nums1{ 1,5,0,3,5 };
	assert(Solution().minimumOperations(nums1) == 3);

	vector<int> nums2{ 0 };
	assert(Solution().minimumOperations(nums2) == 0);
}