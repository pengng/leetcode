#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int minCount(const vector<int>& coins) {
        int count = 0;
        for (auto& num : coins)
            count += num / 2 + num % 2;
        return count;
    }
};

int main() {
    assert(Solution().minCount({ 4,2,1 }) == 4);
    assert(Solution().minCount({ 2,3,10 }) == 8);
}