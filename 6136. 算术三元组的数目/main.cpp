#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int arithmeticTriplets(const vector<int>& nums, int diff) {
        int triplets = 0;
        for (int i = 0; i < nums.size() - 2; i++)
            for (int j = i + 1; j < nums.size() - 1; j++)
                for (int k = j + 1; k < nums.size(); k++)
                    if (nums[j] - nums[i] == diff && nums[k] - nums[j] == diff) triplets++;
        return triplets;
    }
};

int main() {
    assert(Solution().arithmeticTriplets({ 0,1,4,6,7,10 }, 3) == 2);
    assert(Solution().arithmeticTriplets({ 4,5,6,7,8,9 }, 2) == 2);
}