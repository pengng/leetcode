#include <vector>
#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> result;
        int low = 0, high = s.length();
        for (auto letter : s)
            if (letter == 'I') result.push_back(low++);
            else result.push_back(high--);
        result.push_back(low);
        return result;
    }
};

int main() {
    assert(Solution().diStringMatch("IDID") == (vector<int>{0, 4, 1, 3, 2}));
    assert(Solution().diStringMatch("III") == (vector<int>{0, 1, 2, 3}));
    assert(Solution().diStringMatch("DDI") == (vector<int>{3, 2, 0, 1}));
}