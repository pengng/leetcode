#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int oddCells(int m, int n, const vector<vector<int>>& indices) {
        vector<vector<int>> matrix(m, vector<int>(n));
        for (auto &item : indices)
        {
            for (int i = 0; i < m; i++)
                matrix[i][item[1]]++;
            for (int j = 0; j < n; j++)
                matrix[item[0]][j]++;
        }
        int odds = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (matrix[i][j] % 2) odds++;

        return odds;
    }
};

int main() {
    assert(Solution().oddCells(2, 3, { {0, 1}, {1, 1} }) == 6);
    assert(Solution().oddCells(2, 2, { {1, 1}, {0, 0} }) == 0);
}