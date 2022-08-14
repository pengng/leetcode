#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int smallestEqual(const vector<int>& nums) {
		for (auto i = 0; i < nums.size(); i++)
			if (i % 10 == nums[i]) return i;
		return -1;
    }
};

int main() {
	assert(Solution().smallestEqual({ 0,1,2 }) == 0);
	assert(Solution().smallestEqual({ 4,3,2,1 }) == 2);
	assert(Solution().smallestEqual({ 1,2,3,4,5,6,7,8,9,0 }) == -1);
	assert(Solution().smallestEqual({ 2,1,3,5,2 }) == 1);
}