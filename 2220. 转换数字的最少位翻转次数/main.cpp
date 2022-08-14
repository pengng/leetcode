#include <cassert>
using namespace std;

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int times = 0;
        start ^= goal;
        while (start)
        {
            times++;
            start &= start - 1;
        }
        return times;
    }
};

int main() {
    assert(Solution().minBitFlips(10, 7) == 3);
    assert(Solution().minBitFlips(3, 4) == 3);
}