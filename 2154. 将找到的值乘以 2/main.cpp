#include <vector>
#include <unordered_set>
#include <cassert>
using namespace std;

class Solution {
public:
    int findFinalValue(const vector<int>& nums, int original) {
        unordered_set<int> table(nums.begin(), nums.end());
        while (table.find(original) != table.end())
            original <<= 1;
        return original;
    }
};

int main() {
    assert(Solution().findFinalValue({ 5,3,6,1,12 }, 3) == 24);
    assert(Solution().findFinalValue({ 2,7,9 }, 4) == 4);
}