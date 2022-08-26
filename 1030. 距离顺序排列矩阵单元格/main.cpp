#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> matrix;
        for (auto i = 0; i < rows; i++)
            for (auto j = 0; j < cols; j++)
                matrix.push_back({ i, j });
        sort(matrix.begin(), matrix.end(), [&](auto point1, auto point2) { return distance(point1, rCenter, cCenter) < distance(point2, rCenter, cCenter); });
        return matrix;
    }
private:
    int distance(vector<int>& point, int rCenter, int cCenter) {
        return abs(point[0] - rCenter) + abs(point[1] - cCenter);
    }
};

int main() {
    assert(Solution().allCellsDistOrder(1, 2, 0, 0) == (vector<vector<int>>{{0,0},{0,1}}));
    assert(Solution().allCellsDistOrder(2, 2, 0, 1) == (vector<vector<int>>{ {0, 1}, { 0,0 }, { 1,1 }, { 1,0 }}));
    assert(Solution().allCellsDistOrder(2, 3, 1, 2) == (vector<vector<int>>{ {1, 2}, { 0,2 }, { 1,1 }, { 0,1 }, { 1,0 }, { 0,0 }}));
}