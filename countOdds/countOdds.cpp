// 1523. 在区间范围内统计奇数数目

#include <iostream>

class Solution {
public:
    int countOdds(int low, int high) {
        return (high - low + 1) / 2 + (int)(high % 2 != 0 && low % 2 != 0);
    }

};

int main() {
    using namespace std;

    cout << Solution().countOdds(0, 1) << endl;
    cout << Solution().countOdds(1, 2) << endl;
    cout << boolalpha << (Solution().countOdds(3, 7) == 3) << endl;
    cout << boolalpha << (Solution().countOdds(8, 10) == 1) << endl;
}