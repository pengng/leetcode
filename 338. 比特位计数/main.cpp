#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        for (int i = 0; i <= n; i++)
        {
            int bits = 0;
            int k = i;
            while (k)
            {
                bits += k % 2;
                k /= 2;
            }
            result.push_back(bits);
        }

        return result;
    }
};

int main() {
    assert(Solution().countBits(2) == (vector<int>{ 0,1,1 }));
    assert(Solution().countBits(5) == (vector<int>{0, 1, 1, 2, 1, 2}));
}