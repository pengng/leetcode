#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int minimumSum(int num) {
        vector<int> units;
        while (num)
        {
            units.push_back(num % 10);
            num /= 10;
        }
        sort(units.begin(), units.end());
        return (units[0] + units[1]) * 10 + units[2] + units[3];
    }
};

int main() {
    assert(Solution().minimumSum(2932) == 52);
    assert(Solution().minimumSum(4009) == 13);
}