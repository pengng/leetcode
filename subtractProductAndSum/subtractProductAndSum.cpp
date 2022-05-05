// 1281. 整数的各位积和之差

#include <iostream>

using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        while (n)
        {
            int digit = n % 10;
            n /= 10;
            sum += digit;
            product *= digit;
        }

        return product - sum;
    }
};

int main() {
    cout << boolalpha << (Solution().subtractProductAndSum(234) == 15) << endl;
    cout << boolalpha << (Solution().subtractProductAndSum(4421) == 21) << endl;
}