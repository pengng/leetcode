#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        auto i = 0;
        while (i < word1.length() && i < word2.length())
        {
            merged += word1[i];
            merged += word2[i];
            i++;
        }
        if (i < word1.length()) merged += word1.substr(i);
        if (i < word2.length()) merged += word2.substr(i);
        return merged;
    }
};

int main() {
    assert(Solution().mergeAlternately("abc", "pqr") == "apbqcr");
    assert(Solution().mergeAlternately("ab", "pqrs") == "apbqrs");
    assert(Solution().mergeAlternately("abcd", "pq") == "apbqcd");
}