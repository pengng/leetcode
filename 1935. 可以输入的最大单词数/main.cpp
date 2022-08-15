#include <string>
#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> brokens(26);
        for (auto letter : brokenLetters)
            brokens[letter - 'a'] = true;
        auto words = 0;
        auto broken = false;
        for (auto letter : text)
        {
            if (letter != ' ') broken = broken || brokens[letter - 'a'];
            else if (!broken) words++;
            if (letter == ' ') broken = false;
        }
        if (!broken) words++;
        return words;
    }
};

int main() {
    assert(Solution().canBeTypedWords("hello world", "ad") == 1);
    assert(Solution().canBeTypedWords("leet code", "lt") == 1);
    assert(Solution().canBeTypedWords("leet code", "e") == 0);
}