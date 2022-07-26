#include <vector>
#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    int prefixCount(const vector<string>& words, string pref) {
        int count = 0;
        for (auto item : words)
            if (item.find(pref) == 0)
                count++;

        return count;
    }
};

int main() {
    assert(Solution().prefixCount({ "pay","attention","practice","attend" }, "at") == 2);
    assert(Solution().prefixCount({ "leetcode","win","loops","success" }, "code") == 0);
}