#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(const vector<vector<int>>& grid) {
		int n = grid.size();
		vector<vector<int>> result;
		for (auto i = 0; i < n - 2; i++)
		{
			vector<int> row;
			for (auto j = 0; j < n - 2; j++)
			{
				auto largest = 0;
				for (auto k = i; k < i + 3; k++)
				{
					for (auto l = j; l < j + 3; l++)
					{
						if (grid[k][l] > largest) largest = grid[k][l];
					}
				}
				row.push_back(largest);
			}
			result.push_back(row);
		}
		return result;
    }
};

int main() {
	assert(Solution().largestLocal({ {9,9,8,1},{5,6,2,6},{8,2,6,4},{6,2,2,2} }) == (vector<vector<int>>{ {9, 9}, { 8,6 }}));
	assert(Solution().largestLocal({ {1,1,1,1,1},{1,1,1,1,1},{1,1,2,1,1},{1,1,1,1,1},{1,1,1,1,1} }) == (vector<vector<int>>{ {2, 2, 2}, { 2,2,2 }, { 2,2,2 }}));
}