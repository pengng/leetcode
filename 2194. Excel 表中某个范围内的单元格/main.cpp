#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> cells;
        for (char i = s[0]; i <= s[3]; i++)
            for (char j = s[1]; j <= s[4]; j++)
                cells.push_back(string{ i, j });
        return cells;
    }
};

int main() {
    Solution().cellsInRange("K1:L2");
    Solution().cellsInRange("A1:F1");
}