#include<vector>
#include<cassert>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result;
        for (auto i = 0; i <= rowIndex; i++)
        {
            vector<int> row;
            for (auto j = 0; j < i + 1; j++)
                if (j == 0 || j == i) row.push_back(1);
                else row.push_back(result[i - 1][j - 1] + result[i - 1][j]);
            result.push_back(row);
        }
        return result.back();
    }
};

int main() {
    assert(Solution().getRow(3) == (vector<int>{1, 3, 3, 1}));
    assert(Solution().getRow(0) == (vector<int>{1}));
    assert(Solution().getRow(1) == (vector<int>{1, 1}));
}