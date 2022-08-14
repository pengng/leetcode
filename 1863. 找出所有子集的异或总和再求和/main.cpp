#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int subsetXORSum(const vector<int>& nums) {
        vector<vector<int>> subsets = generateSubset(nums, nums.size());
        int sum = 0;
        for (auto& subset : subsets) {
            int value = 0;
            for (auto& num : subset)
                value ^= num;
            sum += value;
        }
        return sum;
    }

    vector<vector<int>> generateSubset(const vector<int>& nums, int n) {
        if (n == 0) return vector<vector<int>>(1, vector<int>());
        vector<vector<int>> subsets = generateSubset(nums, n - 1);
        int last = nums[n - 1];
        int size = subsets.size();
        for (int i = 0; i < size; i++)
        {
            auto subset = vector<int>(subsets[i].begin(), subsets[i].end());
            subset.push_back(last);
            subsets.push_back(subset);
        }
        return subsets;
    }
};

int main() {
    assert(Solution().subsetXORSum({ 1,3 }) == 6);
    assert(Solution().subsetXORSum({ 5,1,6 }) == 28);
    assert(Solution().subsetXORSum({ 3,4,5,6,7,8 }) == 480);
}