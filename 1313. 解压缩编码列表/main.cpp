#include <vector>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(const vector<int>& nums) {
        vector<int> decompress;
        for (int i = 0; i < nums.size(); i += 2)
        {
            int n = nums[i], v = nums[i + 1];
            for (int j = 0; j < n; j++)
                decompress.push_back(v);
        }

        return decompress;
    }
};

int main() {
    Solution().decompressRLElist({ 1,2,3,4 });
    Solution().decompressRLElist({ 1,1,2,3 });
}