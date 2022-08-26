#include <cmath>
#include <cassert>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        if (num == 0) return 1;

        int x = log2(num) + 1;
        return (1U << x) - 1 ^ num;
    }
};

int main() {
    assert(Solution().findComplement(5) == 2);
    assert(Solution().findComplement(1) == 0);
    assert(Solution().findComplement(2147483647) == 0);
}