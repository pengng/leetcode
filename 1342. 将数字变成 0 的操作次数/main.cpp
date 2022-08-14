#include <cassert>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while (num)
        {
            if (num % 2) num -= 1;
            else num /= 2;
            steps++;
        }

        return steps;
    }
};

int main() {
    assert(Solution().numberOfSteps(14) == 6);
    assert(Solution().numberOfSteps(8) == 4);
    assert(Solution().numberOfSteps(123) == 12);
}