#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    bool validPartition(const vector<int>& nums) {
        if (!(nums.size() % 2 % 3 == 0 || nums.size() % 3 % 2 == 0)) return false;
        int start = 0;
        for (int i = 1; i < nums.size(); i++)
            if (nums[i] - nums[i - 1] > 1)
            {
                if (!valid(nums, start, i)) return false;
                start = i;
            }
        return valid(nums, start, nums.size());
    }
private:
    bool valid(const vector<int>& nums, int start, int end) {
        int size = end - start;
        if (size == 0) return true;
        if (size == 1) return false;
        int a = nums[start], b = nums[start + 1];
        if (size == 2) return a == b;
        int c = nums[start + 2];
        if (size == 3) return a == b && b == c || a + 1 == b && b + 1 == c;
        if (size == 4) return valid(nums, start, start + 2) && valid(nums, start + 2, end);
        return
            valid(nums, start, start + 2) && valid(nums, start + 2, end) ||
            valid(nums, start, start + 3) && valid(nums, start + 3, end);
    }
};

int main() {
    assert(Solution().validPartition({ 4,4,4,5,6 }) == true);
    assert(Solution().validPartition({ 1,1,1,2 }) == false);
    assert(Solution().validPartition({ 865579,865579,893593 }) == false);
}