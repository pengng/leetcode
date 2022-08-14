#include <string>
#include <unordered_set>
#include <cassert>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        if (sentence.length() < 26) return false;
        unordered_set<char> letters;
        for (auto& letter : sentence)
            letters.insert(letter);
        return letters.size() == 26;
    }
};

int main() {
    assert(Solution().checkIfPangram("thequickbrownfoxjumpsoverthelazydog") == true);
    assert(Solution().checkIfPangram("leetcode") == false);
}