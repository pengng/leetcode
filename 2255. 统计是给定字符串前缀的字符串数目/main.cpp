#include <vector>
#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    int countPrefixes(const vector<string>& words, string s) {
        int count = 0;
        for (auto& word : words)
        {
            if (word.length() > s.length()) continue;
            int i = 0;
            while (i < word.length() && word[i] == s[i]) i++;
            if (i == word.length()) count++;
        }
        return count;
    }
};

int main() {
    assert(Solution().countPrefixes({ "a","b","c","ab","bc","abc" }, "abc") == 3);
    assert(Solution().countPrefixes({ "a","a" }, "aa") == 2);
}