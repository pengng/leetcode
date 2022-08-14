#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int countNegatives(const vector<vector<int>>& grid) {
        int count = 0;
        for (auto& row : grid)
            for (int i = 0; i < row.size(); i++)
                if (row[i] < 0) {
                    count += row.size() - i;
                    break;
                }
        return count;
    }
};

int main() {
    assert(Solution().countNegatives({ {4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3} }) == 8);
    assert(Solution().countNegatives({ {3,2},{1,0} }) == 0);
}