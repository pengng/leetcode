#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(const vector<vector<int>>& matrix) {
		int m = matrix.size(), n = matrix[0].size();

		vector<vector<int>> transposed(n, vector<int>(m));
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				transposed[j][i] = matrix[i][j];
			}
		}

		return transposed;
    }
};

int main() {
	Solution().transpose({ {1, 2, 3}, {4, 5, 6}, {7, 8, 9} });
	Solution().transpose({ {1, 2, 3}, {4, 5, 6} });
}