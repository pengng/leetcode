#include <vector>
using namespace std;

class Solution {
public:
    vector<int> createTargetArray(const vector<int>& nums, const vector<int>& index) {
        vector<int> target;
        for (int i = 0; i < nums.size(); i++)
            target.insert(target.begin() + index[i], nums[i]);
        return target;
    }
};

int main() {
    Solution().createTargetArray({ 0,1,2,3,4 }, { 0,1,2,2,1 });
    Solution().createTargetArray({ 1,2,3,4,0 }, { 0,1,2,3,0 });
    Solution().createTargetArray({ 1 }, { 0 });
}