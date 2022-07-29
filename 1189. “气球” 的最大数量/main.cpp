#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> counts(26);
        for (auto& letter : text) counts[letter - 'a']++;

        return min({ counts['b' - 'a'], counts['a' - 'a'], counts['l' - 'a'] / 2, counts['o' - 'a'] / 2, counts['n' - 'a']});
    }
};

int main() {
    assert(Solution().maxNumberOfBalloons("nlaebolko") == 1);
    assert(Solution().maxNumberOfBalloons("loonbalxballpoon") == 2);
    assert(Solution().maxNumberOfBalloons("leetcode") == 0);
}