#include<string>
#include<cassert>
using namespace std;

class Solution {
public:
    bool checkString(string s) {
        auto flag = false;
        for (auto letter : s)
            if (flag && letter != 'b') return false;
            else if (letter == 'b') flag = true;
        return true;
    }
};

int main() {
    assert(Solution().checkString("aaabbb") == true);
    assert(Solution().checkString("abab") == false);
    assert(Solution().checkString("bbb") == true);
}