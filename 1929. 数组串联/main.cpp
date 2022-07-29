#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(const vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n * 2);
        for (int i = 0; i < n; i++)
            result[i] = result[i + n] = nums[i];

        return result;
    }
};

int main() {
    Solution().getConcatenation({ 1, 2, 1 });
    Solution().getConcatenation({ 1,3,2,1 });
}