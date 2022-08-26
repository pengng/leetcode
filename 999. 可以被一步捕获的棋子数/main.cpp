#include<vector>
#include<cassert>
using namespace std;

class Solution {
public:
    int numRookCaptures(const vector<vector<char>>& board) {
		auto n = board.size();
		int i, j;
		for (i = 0; i < n; i++)
		{
			auto flag = false;
			for (j = 0; j < n; j++)
				if (board[i][j] == 'R')
				{
					flag = true;
					break;
				}
			if (flag) break;
		}

		auto num = 0;
		auto k = j + 1;
		while (k < n && board[i][k] == '.')
			k++;
		if (k < n && board[i][k] == 'p') num++;

		k = j - 1;
		while (k >= 0 && board[i][k] == '.')
			k--;
		if (k >= 0 && board[i][k] == 'p') num++;

		k = i + 1;
		while (k < n && board[k][j] == '.')
			k++;
		if (k < n && board[k][j] == 'p') num++;

		k = i - 1;
		while (k >= 0 && board[k][j] == '.')
			k--;
		if (k >= 0 && board[k][j] == 'p') num++;

		return num;
    }
};

int main() {
	assert(Solution().numRookCaptures({
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','p','.','.','.','.'},
		{'.','.','.','R','.','.','.','p'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','p','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'}
	}) == 3);

	assert(Solution().numRookCaptures({
		{'.','.','.','.','.','.','.','.'},
		{'.','p','p','p','p','p','.','.'},
		{'.','p','p','B','p','p','.','.'},
		{'.','p','B','R','B','p','.','.'},
		{'.','p','p','B','p','p','.','.'},
		{'.','p','p','p','p','p','.','.'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'}
	}) == 0);

	assert(Solution().numRookCaptures({
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','p','.','.','.','.'},
		{'.','.','.','p','.','.','.','.'},
		{'p','p','.','R','.','p','B','.'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','B','.','.','.','.'},
		{'.','.','.','p','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'}
	}) == 3);
}