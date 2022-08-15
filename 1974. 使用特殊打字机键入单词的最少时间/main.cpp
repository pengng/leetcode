#include <string>
#include <cstdlib>
#include <cassert>
using namespace std;

class Solution {
public:
    int minTimeToType(string word) {
        auto seconds = 0;
        auto last = 'a';
        for (auto i = 0; i < word.length(); i++)
        {
            auto diff = abs(word[i] - last);
            seconds += diff <= 13 ? diff : 26 - diff;
            last = word[i];
        }
        return seconds += word.length();
    }
};

int main() {
    assert(Solution().minTimeToType("abc") == 5);
    assert(Solution().minTimeToType("bza") == 7);
    assert(Solution().minTimeToType("zjpc") == 34);
}