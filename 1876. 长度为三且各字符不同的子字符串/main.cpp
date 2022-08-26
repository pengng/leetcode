#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    int countGoodSubstrings(string s) {
        auto count = 0;
        for (auto i = 0; i + 2 < s.length(); i++)
        {
            auto a = s[i], b = s[i + 1], c = s[i + 2];
            if (a != b && b != c && a != c) count++;
        }
        return count;
    }
};

int main() {
    assert(Solution().countGoodSubstrings("xyzzaz") == 1);
    assert(Solution().countGoodSubstrings("aababcabc") == 4);
    assert(Solution().countGoodSubstrings("x") == 0);
}