#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    bool isToeplitzMatrix(const vector<vector<int>>& matrix) {
		auto m = matrix.size(), n = matrix.front().size();
		for (auto i = 0; i < m; i++)
		{
			auto j = 0, k = 1;
			while (i + k < m && j + k < n && matrix[i + k][j + k] == matrix[i][j])
				k++;
			if (i + k < m && j + k < n) return false;
		}
		for (auto j = 1; j < n; j++)
		{
			auto i = 0, k = 1;
			while (i + k < m && j + k < n && matrix[i + k][j + k] == matrix[i][j])
				k++;
			if (i + k < m && j + k < n) return false;
		}
		return true;
    }
};

int main() {
	assert(Solution().isToeplitzMatrix({ {1,2,3,4},{5,1,2,3},{9,5,1,2} }) == true);
	assert(Solution().isToeplitzMatrix({ {1,2},{2,2} }) == false);
}