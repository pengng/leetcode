#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int heightChecker(const vector<int>& heights) {
        int count = 0;
        vector<int> expected(heights.begin(), heights.end());
        sort(expected.begin(), expected.end());
        for (int i = 0; i < expected.size(); i++)
            if (expected[i] != heights[i])
                count++;
        return count;
    }
};

int main() {
    assert(Solution().heightChecker({ 1,1,4,2,1,3 }) == 3);
    assert(Solution().heightChecker({ 5,1,2,3,4 }) == 5);
    assert(Solution().heightChecker({ 1,2,3,4,5 }) == 0);
}