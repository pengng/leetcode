#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int countPairs(const vector<int>& nums, int k) {
        int count = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (i * j % k == 0 && nums[i] == nums[j]) count++;
            }
        }

        return count;
    }
};

int main() {
    assert(Solution().countPairs({ 3,1,2,2,2,1,3 }, 2) == 4);
    assert(Solution().countPairs({ 1,2,3,4 }, 1) == 0);
}