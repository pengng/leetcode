#include <string>
#include <vector>
#include <cstdlib>
#include <cassert>
using namespace std;

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> counts1(26), counts2(26);
        for (auto letter : word1)
            counts1[letter - 'a']++;
        for (auto letter : word2)
            counts2[letter - 'a']++;
        for (auto i = 0; i < 26; i++)
            if (abs(counts1[i] - counts2[i]) > 3) return false;
        return true;
    }
};

int main() {
    assert(Solution().checkAlmostEquivalent("aaaa", "bccb") == false);
    assert(Solution().checkAlmostEquivalent("abcdeef", "abaaacc") == true);
    assert(Solution().checkAlmostEquivalent("cccddabba", "babababab") == true);
    assert(Solution().checkAlmostEquivalent("zzzyyy", "iiiiii") == false);
}