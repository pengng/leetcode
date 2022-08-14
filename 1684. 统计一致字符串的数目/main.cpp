#include <vector>
#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, const vector<string>& words) {
        int count = 0;
        vector<bool> letters(26);
        for (auto& letter : allowed) letters[letter - 'a'] = true;
        for (auto& word : words)
        {
            auto it = word.begin();
            while (it != word.end() && letters[*it - 'a'])
                it++;
            if (it == word.end()) count++;
        }
        return count;
    }
};

int main() {
    assert(Solution().countConsistentStrings("ab", { "ad", "bd", "aaab", "baa", "badab" }) == 2);
    assert(Solution().countConsistentStrings("abc", { "a","b","c","ab","ac","bc","abc" }) == 7);
    assert(Solution().countConsistentStrings("cad", { "cc","acd","b","ba","bac","bad","ac","d" }) == 4);
}