#include <string>
#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> counts(26);
        for (auto letter : s)
            counts[letter - 'a']++;
        auto count = counts[s[0] - 'a'];
        for (auto cnt : counts)
            if (cnt && count != cnt) return false;
        return true;
    }
};

int main() {
    assert(Solution().areOccurrencesEqual("abacbc") == true);
    assert(Solution().areOccurrencesEqual("aaabb") == false);
    assert(Solution().areOccurrencesEqual("aca") == false);
}