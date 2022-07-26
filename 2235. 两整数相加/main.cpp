#include <cassert>
using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    assert(Solution().sum(12, 5) == 17);
    assert(Solution().sum(-10, 4) == -6);
}