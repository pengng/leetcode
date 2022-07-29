#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int maximumWealth(const vector<vector<int>>& accounts) {
        int maximum = 0;
        for (auto account : accounts)
        {
            int sum = 0;
            for (auto wealth : account) sum += wealth;
            maximum = max(maximum, sum);
        }

        return maximum;
    }
};

int main() {
    assert(Solution().maximumWealth({ {1, 2, 3}, {3, 2, 1} }) == 6);
    assert(Solution().maximumWealth({ {1, 5}, {7, 3}, {3, 5} }) == 10);
    assert(Solution().maximumWealth({ {2, 8, 7}, {7, 1, 3}, {1, 9, 5} }) == 17);
}