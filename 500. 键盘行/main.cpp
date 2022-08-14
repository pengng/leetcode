#include <vector>
#include <string>
#include <cctype>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<string> findWords(const vector<string>& words) {
        vector<string> lines{ "qwertyuiop", "asdfghjkl", "zxcvbnm" };
        vector<int> table(128);
        for (auto i = 0; i < lines.size(); i++)
            for (auto letter : lines[i])
                table[letter] = table[toupper(letter)] = i;

        vector<string> result;
        for (auto& word : words)
        {
            auto j = 0;
            while (j < word.length() && table[word[j]] == table[word[0]])
                j++;
            if (j == word.length()) result.push_back(word);
        }
        return result;
    }
};

int main() {
    assert(Solution().findWords({ "Hello", "Alaska", "Dad", "Peace" }) == (vector<string>{"Alaska", "Dad"}));
    assert(Solution().findWords({ "omk" }) == (vector<string>{}));
    assert(Solution().findWords({ "adsdf", "sfd" }) == (vector<string>{"adsdf", "sfd"}));
}