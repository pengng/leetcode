#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int diagonalSum(const vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        for (int i = 0; i < n; i++)
            sum += mat[i][i] + mat[i][n - i - 1];
        if (n % 2) sum -= mat[n / 2][n / 2];
        return sum;
    }
};

int main() {
    assert(Solution().diagonalSum({ {1,2,3},{4,5,6},{7,8,9} }) == 25);
    assert(Solution().diagonalSum({ {1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1} }) == 8);
    assert(Solution().diagonalSum({ {5} }) == 5);
}