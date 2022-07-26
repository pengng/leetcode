#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> balls(50);
        for (int i = lowLimit; i <= highLimit; i++)
        {
            int sum = 0;
            int x = i;
            while (x)
            {
                sum += x % 10;
                x /= 10;
            }
            balls[sum]++;
        }

        return *max_element(balls.begin(), balls.end());
    }
};

int main() {
    assert(Solution().countBalls(1, 10) == 2);
    assert(Solution().countBalls(5, 15) == 2);
    assert(Solution().countBalls(19, 28) == 2);
}