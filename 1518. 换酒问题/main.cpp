#include<cassert>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        auto num = numBottles;
        while (numBottles >= numExchange)
        {
            num += numBottles / numExchange;
            numBottles = numBottles / numExchange + numBottles % numExchange;
        }
        return num;
    }
};

int main() {
    assert(Solution().numWaterBottles(9, 3) == 13);
    assert(Solution().numWaterBottles(15, 4) == 19);
    assert(Solution().numWaterBottles(5, 5) == 6);
    assert(Solution().numWaterBottles(2, 3) == 2);
}