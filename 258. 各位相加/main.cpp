#include <cassert>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        while (num >= 10)
        {
            auto sum = 0;
            while (num)
            {
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};

int main() {
    assert(Solution().addDigits(38) == 2);
    assert(Solution().addDigits(0) == 0);
}