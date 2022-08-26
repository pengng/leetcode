#include<cassert>
#include<cmath>
using namespace std;

class Solution {
public:
    int countTriples(int n) {
        auto count = 0;
        for (auto i = 1; i <= n; i++)
            for (auto j = 1; j <= n; j++)
            {
                auto s = i * i + j * j;
                auto k = int(sqrt(s));
                if (k <= n && k * k == s) count++;
            }
        return count;
    }
};

int main() {
    assert(Solution().countTriples(5) == 2);
    assert(Solution().countTriples(10) == 4);
}