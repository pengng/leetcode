#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    bool digitCount(string num) {
        int counts[10]{};
        for (auto& letter : num)
            counts[letter - '0']++;
        for (int i = 0; i < num.length(); i++)
            if (counts[i] != num[i] - '0') return false;
        return true;
    }
};

int main() {
    assert(Solution().digitCount("1210") == true);
    assert(Solution().digitCount("030") == false);
}