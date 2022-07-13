#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) return 1;

        int x = log2(n) + 1;
        return (1 << x) - 1 ^ n;
    }
};

int main() {
    cout << Solution().bitwiseComplement(5) << endl;
    cout << Solution().bitwiseComplement(7) << endl;
    cout << Solution().bitwiseComplement(10) << endl;
}