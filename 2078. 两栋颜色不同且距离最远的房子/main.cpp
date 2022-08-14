#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int maxDistance(const vector<int>& colors) {
        auto maximum = 0;
        for (auto i = 0; i < colors.size() - 1; i++)
            if (colors[i] != colors.back()) {
                maximum = max(maximum, int(colors.size() - 1 - i));
            }
        for (auto i = colors.size() - 1; i > 0; i--)
            if (colors[i] != colors.front()) {
                maximum = max(maximum, int(i));
            }
        return maximum;
    }
};

int main() {
    assert(Solution().maxDistance({ 1,1,1,6,1,1,1 }) == 3);
    assert(Solution().maxDistance({ 1,8,3,8,3 }) == 4);
    assert(Solution().maxDistance({ 0,1 }) == 1);
}