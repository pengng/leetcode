#include <iostream>

using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        return (high - low + 1) / 2 + (int)(high % 2 != 0 && low % 2 != 0);
    }

    int main() {
        cout << countOdds(0, 1);
        cout << countOdds(1, 2);
    }
};