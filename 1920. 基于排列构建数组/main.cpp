#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<int> buildArray(const vector<int>& nums) {
        vector<int> result(nums.size());
        
        for (int i = 0; i < nums.size(); i++)
            result[i] = nums[nums[i]];

        return result;
    }
};

int main() {
    assert(Solution().buildArray({ 0,2,1,5,3,4 }) == (vector<int>{0, 1, 2, 4, 5, 3}));
    assert(Solution().buildArray({ 5,0,1,2,3,4 }) == (vector<int>{4, 5, 0, 1, 2, 3}));
}