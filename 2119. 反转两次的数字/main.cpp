#include <cassert>
using namespace std;

class Solution {
public:
    bool isSameAfterReversals(int num) {
        return reverse(reverse(num)) == num;
    }
private:
    int reverse(int num) {
        int k = 0;
        while (num)
        {
            k *= 10;
            k += num % 10;
            num /= 10;
        }
        return k;
    }
};

int main() {
    assert(Solution().isSameAfterReversals(526) == true);
    assert(Solution().isSameAfterReversals(1800) == false);
    assert(Solution().isSameAfterReversals(0) == true);
}