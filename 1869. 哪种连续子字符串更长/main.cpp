#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    bool checkZeroOnes(string s) {
        auto zeros = 0, ones = 0;
        auto maxZeros = 0, maxOnes = 0;
        for (auto letter : s)
        {
            if (letter == '0') zeros++, ones = 0;
            else ones++, zeros = 0;
            if (zeros > maxZeros) maxZeros = zeros;
            if (ones > maxOnes) maxOnes = ones;
        }
        return maxOnes > maxZeros;
    }
};

int main() {
    assert(Solution().checkZeroOnes("1101") == true);
    assert(Solution().checkZeroOnes("111000") == false);
    assert(Solution().checkZeroOnes("110100010") == false);
}