#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int a = 0, b = 0, c = 0;
        for (auto letter : firstWord)
            a = a * 10 + (letter - 'a');
        for (auto letter : secondWord)
            b = b * 10 + (letter - 'a');
        for (auto letter : targetWord)
            c = c * 10 + (letter - 'a');
        return a + b == c;
    }
};

int main() {
    assert(Solution().isSumEqual("acb", "cba", "cdb") == true);
    assert(Solution().isSumEqual("aaa", "a", "aab") == false);
    assert(Solution().isSumEqual("aaa", "a", "aaaa") == true);
}