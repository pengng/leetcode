#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int countElements(const vector<int>& nums) {
        int count = 0;
        int smallest = *min_element(nums.begin(), nums.end());
        int largest = *max_element(nums.begin(), nums.end());
        for (auto item : nums)
            if (item > smallest && item < largest)
                count++;

        return count;
    }
};

int main() {
    assert(Solution().countElements({ 11,7,2,15 }) == 2);
    assert(Solution().countElements({ -3,3,3,90 }) == 2);
}