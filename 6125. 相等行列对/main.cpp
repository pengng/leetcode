#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int equalPairs(const vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid.size(); j++)
            {
                int k = 0;
                while (k < grid.size() && grid[i][k] == grid[k][j])
                    k++;
                if (k == grid.size()) count++;
            }
        }

        return count;
    }
};

int main() {
    assert(Solution().equalPairs({ { 3, 2, 1 }, { 1, 7, 6 }, { 2, 7, 7 } }) == 1);
    assert(Solution().equalPairs({ { 3,1,2,2 }, { 1,4,4,5 }, {2,4,2,2 }, {2,4,2,2} }) == 3);
}