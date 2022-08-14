#include <vector>
#include <unordered_map>
#include <cassert>
using namespace std;

class Solution {
public:
    bool divideArray(const vector<int>& nums) {
        unordered_map<int, int> counts;
        for (auto num : nums)
            counts[num]++;
        for (auto pair : counts)
            if (pair.second & 1) return false;
        return true;
    }
};

int main() {
    assert(Solution().divideArray({ 3,2,3,2,2,2 }) == true);
    assert(Solution().divideArray({ 1,2,3,4 }) == false);
}