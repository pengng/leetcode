#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(const vector<int>& nums) {
        vector<int> arr(nums.size(), 0);

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i != j && nums[j] < nums[i]) arr[i]++;
            }
        }

        return arr;
    }
};

int main() {
    Solution().smallerNumbersThanCurrent({ 8,1,2,2,3 });
    Solution().smallerNumbersThanCurrent({ 6,5,4,8 });
    Solution().smallerNumbersThanCurrent({ 7,7,7,7 });
}