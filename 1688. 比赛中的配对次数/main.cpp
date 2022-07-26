#include <cassert>
using namespace std;

class Solution {
public:
    int numberOfMatches(int n) {
        int count = 0;
        while (n > 1)
        {
            count += n / 2;
            n = n / 2 + n % 2;
        }

        return count;
    }
};

int main() {
    assert(Solution().numberOfMatches(7) == 6);
    assert(Solution().numberOfMatches(14) == 13);
}