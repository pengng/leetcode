#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;
        for (auto& ch : s)
            if (ch == letter)
                count++;

        return count * 100 / s.length();
    }
};

int main() {
    assert(Solution().percentageLetter("foobar", 'o') == 33);
    assert(Solution().percentageLetter("jjjj", 'k') == 0);
}