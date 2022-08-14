#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<int> numberOfPairs(const vector<int>& nums) {
        vector<int> counts(101);
        for (auto& num : nums)
            counts[num]++;
        int pairs = 0;
        for (auto& count : counts)
            pairs += count / 2;
        return { pairs, int(nums.size() - pairs * 2) };
    }
};

int main() {
    assert(Solution().numberOfPairs({ 1,3,2,1,3,2,2 }) == (vector<int>{3, 1}));
    assert(Solution().numberOfPairs({ 1,1 }) == (vector<int>{1, 0}));
    assert(Solution().numberOfPairs({ 0 }) == (vector<int>{0, 1}));
}