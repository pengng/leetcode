#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
		// matrix transpose
		for (int i = 0; i < matrix.size(); i++)
		{
			for (int j = i; j < matrix.size(); j++)
			{
				swap(matrix[i][j], matrix[j][i]);
			}
		}

		// flipY
		for (int i = 0; i < matrix.size(); i++)
		{
			for (int j = 0; j < matrix.size() / 2; j++)
			{
				swap(matrix[i][j], matrix[i][matrix.size() - j - 1]);
			}
		}
    }
};

int main()
{
	vector<vector<int>> matrix{ {1,2,3} ,{4,5,6}, {7,8,9} };
	vector<vector<int>> matrix2{ {5, 1, 9, 11 }, { 2, 4, 8, 10 }, { 13, 3, 6, 7 }, { 15, 14, 12, 16 }};
	Solution().rotate(matrix);
	Solution().rotate(matrix2);
}