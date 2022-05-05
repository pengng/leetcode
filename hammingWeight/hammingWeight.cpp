// 191. 位1的个数

#include <stdint.h>
#include <iostream>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int weight = 0;

        while (n)
        {
            weight += n % 2;
            n /= 2;
        }

        return weight;
    }
};

int main() {
    cout << boolalpha << (Solution().hammingWeight(0b00000000000000000000000000001011) == 3) << endl;
    cout << boolalpha << (Solution().hammingWeight(0b00000000000000000000000010000000) == 1) << endl;
    cout << boolalpha << (Solution().hammingWeight(0b11111111111111111111111111111101) == 31) << endl;
}