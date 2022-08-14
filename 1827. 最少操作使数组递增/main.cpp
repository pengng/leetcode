#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int minOperations(const vector<int>& nums) {
        int count = 0;
        int last = nums[0];
        for (int i = 1; i < nums.size(); i++)
            if (nums[i] > last) last = nums[i];
            else count += (++last - nums[i]);
        return count;
    }
};

int main() {
    assert(Solution().minOperations({ 1,1,1 }) == 3);
    assert(Solution().minOperations({ 1,5,2,4,1 }) == 14);
    assert(Solution().minOperations({ 8 }) == 0);
}