#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    int calculate(string s) {
        int x = 1, y = 0;
        for (auto& letter : s)
            if (letter == 'A') x = x + x + y;
            else y = y + x + y;
        return x + y;
    }
};

int main() {
    assert(Solution().calculate("AB") == 4);
}