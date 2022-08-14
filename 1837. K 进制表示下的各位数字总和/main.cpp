#include <cassert>
using namespace std;

class Solution {
public:
    int sumBase(int n, int k) {
        int sum = 0;
        while (n)
        {
            sum += n % k;
            n /= k;
        }
        return sum;
    }
};

int main() {
    assert(Solution().sumBase(34, 6) == 9);
    assert(Solution().sumBase(10, 10) == 1);
}