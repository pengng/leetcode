#include<vector>
#include<cassert>
using namespace std;

class Solution {
public:
    int islandPerimeter(const vector<vector<int>>& grid) {
        auto perimeter = 0;
        auto n = grid.size(), m = grid.front().size();
        for (auto i = 0; i < n; i++)
            for (auto j = 0; j < m; j++)
            {
                if (!grid[i][j]) continue;
                perimeter += 4;
                if (i - 1 >= 0 && grid[i - 1][j]) perimeter--;
                if (i + 1 < n && grid[i + 1][j]) perimeter--;
                if (j - 1 >= 0 && grid[i][j - 1]) perimeter--;
                if (j + 1 < m && grid[i][j + 1]) perimeter--;
            }
        return perimeter;
    }
};

int main() {
    assert(Solution().islandPerimeter({ {0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0} }) == 16);
    assert(Solution().islandPerimeter({ {1} }) == 4);
    assert(Solution().islandPerimeter({ {1,0} }) == 4);
}