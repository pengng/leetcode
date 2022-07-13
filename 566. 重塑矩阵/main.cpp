#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(const vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();

        if (m * n != r * c) return mat;

        vector<vector<int>> matrix(r, vector<int>(c));

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                int k = (i * c + j);
                int a = k / n, b = k % n;
                matrix[i][j] = mat[a][b];
            }
        }

        return matrix;
    }
};

int main() {
    Solution().matrixReshape({ {1, 2}, {3, 4} }, 1, 4);
    Solution().matrixReshape({ {1, 2}, {3, 4} }, 2, 4);
}