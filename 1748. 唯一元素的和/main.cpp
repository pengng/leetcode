#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int sumOfUnique(const vector<int>& nums) {
        vector<int> counts(101);
        for (auto num : nums)
            counts[num]++;
        int sum = 0;
        for (int i = 0; i < counts.size(); i++)
            if (counts[i] == 1) sum += i;
        return sum;
    }
};

int main() {
    assert(Solution().sumOfUnique({ 1,2,3,2 }) == 4);
    assert(Solution().sumOfUnique({ 1,1,1,1,1 }) == 0);
    assert(Solution().sumOfUnique({ 1,2,3,4,5 }) == 15);
}