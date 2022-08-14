#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers(const vector<vector<int>>& matrix) {
		vector<int> luckies;
		for (int i = 0; i < matrix.size(); i++)
		{
			auto smallest = min_element(matrix[i].begin(), matrix[i].end());
			auto j = distance(matrix[i].begin(), smallest);
			auto k = 0;
			while (k < matrix.size() && matrix[k][j] <= *smallest)
				k++;
			if (k == matrix.size()) luckies.push_back(*smallest);
		}
		return luckies;
    }
};

int main() {
	assert(Solution().luckyNumbers({ {3,7,8},{9,11,13},{15,16,17} }) == (vector<int>{15}));
	assert(Solution().luckyNumbers({ {1,10,4,2},{9,3,8,7},{15,16,17,12} }) == (vector<int>{12}));
	assert(Solution().luckyNumbers({ {7,8},{1,2} }) == (vector<int>{7}));
}