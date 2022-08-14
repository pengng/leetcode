#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int l = 0;
        int r = 0;
        for (auto& letter : s)
        {
            if (letter == 'L') l++;
            else r++;
            if (l == r) {
                count++;
                l = r = 0;
            }
        }
        return count;
    }
};

int main() {
    assert(Solution().balancedStringSplit("RLRRLLRLRL") == 4);
    assert(Solution().balancedStringSplit("RLLLLRRRLR") == 3);
    assert(Solution().balancedStringSplit("LLLLRRRR") == 1);
    assert(Solution().balancedStringSplit("RLRRRLLRLL") == 2);
}