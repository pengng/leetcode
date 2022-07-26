#include <string>
#include <unordered_set>
#include <cassert>
using namespace std;

class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> chars;
        for (auto c : s)
            if (chars.find(c) != chars.end())
                return c;
            else
                chars.insert(c);

        return 'a';
    }
};

int main() {
    assert(Solution().repeatedCharacter("abccbaacz") == 'c');
    assert(Solution().repeatedCharacter("abcdd") == 'd');
}