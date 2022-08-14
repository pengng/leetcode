#include <vector>
#include <cassert>
#include <cstdlib>
using namespace std;

class Solution {
public:
    int minStartValue(const vector<int>& nums) {
        auto smallest = 0;
        auto sum = 0;
        for (auto num : nums)
        {
            sum += num;
            if (sum < smallest) smallest = sum;
        }
        return smallest < 0 ? abs(smallest) + 1 : 1;
    }
};

int main() {
    assert(Solution().minStartValue({ -3,2,-3,4,2 }) == 5);
    assert(Solution().minStartValue({ 1,2 }) == 1);
    assert(Solution().minStartValue({ 1,-2,-3 }) == 5);
}