#include <vector>
#include <cmath>
#include <cassert>
using namespace std;

class Solution {
public:
    int findNumbers(const vector<int>& nums) {
        int evens = 0;
        for (auto num : nums)
            if (int(log10(num)) % 2)
                evens++;

        return evens;
    }
};

int main() {
    assert(Solution().findNumbers({ 12,345,2,6,7896 }) == 2);
    assert(Solution().findNumbers({ 555,901,482,1771 }) == 1);
}