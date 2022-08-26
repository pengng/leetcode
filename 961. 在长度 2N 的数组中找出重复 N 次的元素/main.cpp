#include <vector>
#include <unordered_set>
#include <cassert>
using namespace std;

class Solution {
public:
    int repeatedNTimes(const vector<int>& nums) {
        unordered_set<int> visited;
        auto it = nums.begin();
        while (it != nums.end())
        {
            if (visited.find(*it) != visited.end()) break;
            visited.insert(*it);
            it++;
        }
        return *it;
    }
};

int main() {
    assert(Solution().repeatedNTimes({ 1,2,3,3 }) == 3);
    assert(Solution().repeatedNTimes({ 2,1,2,5,3,2 }) == 2);
    assert(Solution().repeatedNTimes({ 5,1,5,2,5,3,5,4 }) == 5);
}