#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for (auto& letter : moves)
            if (letter == 'L') x--;
            else if (letter == 'R') x++;
            else if (letter == 'U') y++;
            else y--;
        return x == 0 && y == 0;
    }
};

int main() {
    assert(Solution().judgeCircle("UD") == true);
    assert(Solution().judgeCircle("LL") == false);
}