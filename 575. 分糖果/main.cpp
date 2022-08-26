#include <vector>
#include <unordered_set>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int distributeCandies(const vector<int>& candyType) {
        unordered_set<int> types(candyType.begin(), candyType.end());
        return min(candyType.size() / 2, types.size());
    }
};

int main() {
    assert(Solution().distributeCandies({ 1,1,2,2,3,3 }) == 3);
    assert(Solution().distributeCandies({ 1,1,2,3 }) == 2);
    assert(Solution().distributeCandies({ 6,6,6,6 }) == 1);
}