#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int x = coordinates[0] - 'a';
        int y = coordinates[1] - '1';
        return (x + y) % 2;
    }
};

int main() {
    assert(Solution().squareIsWhite("a1") == false);
    assert(Solution().squareIsWhite("h3") == true);
    assert(Solution().squareIsWhite("c7") == false);
}