#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    int countAsterisks(string s) {
        int asterisks = 0;

        bool flag = true;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '|') flag = !flag;
            else if (s[i] == '*' && flag) asterisks++;
        }

        return asterisks;
    }
};

int main() {
    assert(Solution().countAsterisks("l|*e*et|c**o|*de|") == 2);
    assert(Solution().countAsterisks("iamprogrammer") == 0);
    assert(Solution().countAsterisks("yo|uar|e**|b|e***au|tifu|l") == 5);
}