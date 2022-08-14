#include <vector>
#include <unordered_map>
#include <cassert>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(const vector<int>& nums) {
        int pairs = 0;
        unordered_map<int, int> counts;
        for (auto& num : nums)
            pairs += counts[num]++;
        return pairs;
    }
};

int main() {
    assert(Solution().numIdenticalPairs({ 1,2,3,1,1,3 }) == 4);
    assert(Solution().numIdenticalPairs({ 1,1,1,1 }) == 6);
    assert(Solution().numIdenticalPairs({ 1,2,3 }) == 0);
}