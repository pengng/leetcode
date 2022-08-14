#include <cassert>
using namespace std;

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        auto count = 0;
        for (auto i = left; i <= right; i++)
        {
            auto bits = 0;
            auto k = i;
            while (k)
            {
                if (k % 2) bits++;
                k /= 2;
            }
            auto j = 2;
            while (j < bits && bits % j)
                j++;
            if (j == bits) count++;
        }
        return count;
    }
};

int main() {
    assert(Solution().countPrimeSetBits(6, 10) == 4);
    assert(Solution().countPrimeSetBits(10, 15) == 5);
}