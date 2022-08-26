#include <cinttypes>
#include <cassert>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t k = 0;

        for (auto i = 0; i < 32; i++)
        {
            k <<= 1;
            k |= n & 1;
            n >>= 1;
        }
        return k;
    }
};

int main() {
    assert(Solution().reverseBits(43261596U) == 964176192U);
    assert(Solution().reverseBits(4294967293U) == 3221225471U);
}