#include<cassert>

class Solution {
public:
    int totalMoney(int n) {
        auto week = (1 + 7) * 7 / 2;
        auto weeks = n / 7;
        auto total = week * weeks + weeks * (weeks - 1) / 2 * 7;
        for (auto i = 0; i < n % 7; i++)
            total += weeks + 1 + i;
        return total;
    }
};

int main() {
    assert(Solution().totalMoney(4) == 10);
    assert(Solution().totalMoney(10) == 37);
    assert(Solution().totalMoney(20) == 96);
}