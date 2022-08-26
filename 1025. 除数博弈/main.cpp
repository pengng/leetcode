#include <cassert>
using namespace std;

class Solution {
public:
    bool divisorGame(int n) {
        return n % 2 == 0;
    }
};

int main() {
    assert(Solution().divisorGame(2) == true);
    assert(Solution().divisorGame(3) == false);
}