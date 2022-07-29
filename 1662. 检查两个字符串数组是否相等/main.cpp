#include <vector>
#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(const vector<string>& word1, const vector<string>& word2) {
        string a;
        string b;
        for (auto word : word1) a += word;
        for (auto word : word2) b += word;

        return a == b;
    }
};

int main() {
    assert(Solution().arrayStringsAreEqual({ "ab", "c" }, { "a", "bc" }) == true);
    assert(Solution().arrayStringsAreEqual({ "a", "cb" }, { "ab", "c" }) == false);
    assert(Solution().arrayStringsAreEqual({ "abc", "d", "defg" }, { "abcddefg" }) == true);
}