#include <string>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    string smallestNumber(string pattern) {
        string result = "123456789";
        result.resize(pattern.length() + 1);
        auto k = 0;
        for (auto i = 0; i < pattern.length(); i++)
            if (pattern[i] == 'D') k++;
            else if (k > 0)
            {
                reverse(result.begin() + i - k, result.begin() + i + 1);
                k = 0;
            }
        if (k > 0) reverse(result.begin() + pattern.length() - k, result.end());
        return result;
    }
};

int main() {
    assert(Solution().smallestNumber("IIIDIDDD") == "123549876");
    assert(Solution().smallestNumber("DDD") == "4321");
}