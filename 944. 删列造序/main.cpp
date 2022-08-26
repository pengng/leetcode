#include<vector>
#include<string>
#include<cassert>
using namespace std;

class Solution {
public:
    int minDeletionSize(const vector<string>& strs) {
        auto count = 0;
        for (auto i = 0; i < strs.front().length(); i++)
            for (auto j = 1; j < strs.size(); j++)
                if (strs[j][i] < strs[j - 1][i])
                {
                    count++;
                    break;
                }
        return count;
    }
};

int main() {
    assert(Solution().minDeletionSize({ "cba","daf","ghi" }) == 1);
    assert(Solution().minDeletionSize({ "a","b" }) == 0);
    assert(Solution().minDeletionSize({ "zyx","wvu","tsr" }) == 3);
    assert(Solution().minDeletionSize({ "rrjk","furt","guzm" }) == 2);
}