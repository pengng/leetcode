#include <cassert>
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int result = start;
        for (int i = 1; i < n; i++)
            result ^= start + i * 2;
        return result;
    }
};

int main() {
    assert(Solution().xorOperation(5, 0) == 8);
    assert(Solution().xorOperation(4, 3) == 8);
    assert(Solution().xorOperation(1, 7) == 7);
    assert(Solution().xorOperation(10, 5) == 2);
}