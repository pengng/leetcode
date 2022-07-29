#include <vector>
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
    Solution().buildArray({ 0,2,1,5,3,4 });
    Solution().buildArray({ 5,0,1,2,3,4 });
}