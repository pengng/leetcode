#include<vector>
#include<algorithm>
#include<climits>
#include<cassert>
using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(const vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> rowMax, colMax;
        for (auto i = 0; i < n; i++)
        {
            auto row = INT_MIN, column = INT_MIN;
            for (auto j = 0; j < n; j++)
            {
                if (grid[i][j] > row) row = grid[i][j];
                if (grid[j][i] > column) column = grid[j][i];
            }
            rowMax.push_back(row);
            colMax.push_back(column);
        }
        auto increase = 0;
        for (auto i = 0; i < n; i++)
            for (auto j = 0; j < n; j++)
                increase += min(rowMax[i], colMax[j]) - grid[i][j];
        return increase;
    }
};

int main() {
    assert(Solution().maxIncreaseKeepingSkyline({ {3,0,8,4},{2,4,5,7},{9,2,6,3},{0,3,1,0} }) == 35);
    assert(Solution().maxIncreaseKeepingSkyline({ {0,0,0},{0,0,0},{0,0,0} }) == 0);
}