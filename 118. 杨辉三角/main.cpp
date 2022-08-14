#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for (auto i = 0; i < numRows; i++)
        {
            vector<int> row(i + 1, 1);
            for (auto j = 1; j < i; j++)
                row[j] = result[i - 1][j - 1] + result[i - 1][j];
            result.push_back(row);
        }
        return result;
    }
};

int main() {
    assert(Solution().generate(5) == (vector<vector<int>>{ {1}, { 1,1 }, { 1,2,1 }, { 1,3,3,1 }, { 1,4,6,4,1 }}));
    assert(Solution().generate(1) == (vector<vector<int>>{ {1}}));
}