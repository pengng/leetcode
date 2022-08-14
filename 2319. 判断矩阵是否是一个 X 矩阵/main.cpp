#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    bool checkXMatrix(const vector<vector<int>>& grid) {
        int n = grid.size();
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if ((j == i || j == n - 1 - i) ^ (grid[i][j] != 0)) return false;
        return true;
    }
};

int main() {
    assert(Solution().checkXMatrix({ {2,0,0,1},{0,3,1,0},{0,5,2,0},{4,0,0,2} }) == true);
    assert(Solution().checkXMatrix({ {5,7,0},{0,3,1},{0,5,0} }) == false);
}