#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int projectionArea(const vector<vector<int>>& grid) {
        auto n = grid.size();
        auto area = 0;
        for (auto i = 0; i < n; i++)
        {
            auto rowMax = 0;
            auto colMax = 0;
            for (int j = 0; j < n; j++) {
                if (grid[i][j] > rowMax) rowMax = grid[i][j];
                if (grid[j][i] > colMax) colMax = grid[j][i];
                if (grid[i][j] != 0) area++;
            }
            area += rowMax + colMax;
        }
        return area;
    }
};

int main() {
    assert(Solution().projectionArea({ {1,2},{3,4} }) == 17);
    assert(Solution().projectionArea({ {2} }) == 5);
    assert(Solution().projectionArea({ {1,0},{0,2} }) == 8);
}