#include <string>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int findLUSlength(string a, string b) {
        return a == b ? -1 : max(a.length(), b.length());
    }
};

int main() {
    assert(Solution().findLUSlength("aba", "cdc") == 3);
    assert(Solution().findLUSlength("aaa", "bbb") == 3);
    assert(Solution().findLUSlength("aaa", "aaa") == -1);
}