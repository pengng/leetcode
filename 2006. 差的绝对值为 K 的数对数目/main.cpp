#include <vector>
#include <cstdlib>
#include <cassert>
using namespace std;

class Solution {
public:
    int countKDifference(const vector<int>& nums, int k) {
        int count = 0;
        vector<int> counts(101);
        for (auto num : nums)
        {
            if (num - k > 0) count += counts[num - k];
            if (num + k <= 100) count += counts[num + k];
            counts[num]++;
        }
        return count;
    }
};

int main() {
    assert(Solution().countKDifference({ 1,2,2,1 }, 1) == 4);
    assert(Solution().countKDifference({ 1,3 }, 3) == 0);
    assert(Solution().countKDifference({ 3,2,1,5,4 }, 2) == 3);
    assert(Solution().countKDifference({ 1, 3, 5, 9, 2, 4, 1, 1, 4, 3, 6, 6, 4, 8, 7, 9 }, 3) == 22);
}