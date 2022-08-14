#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int maximum = 0;
        int depth = 0;
        for (auto& letter : s)
        {
            if (letter == '(') depth++;
            else if (letter == ')') depth--;
            if (depth > maximum) maximum = depth;
        }
        return maximum;
    }
};

int main() {
    assert(Solution().maxDepth("(1+(2*3)+((8)/4))+1") == 3);
    assert(Solution().maxDepth("(1)+((2))+(((3)))") == 3);
}