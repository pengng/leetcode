#include <vector>
#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    int numOfStrings(const vector<string>& patterns, string word) {
        int count = 0;
        for (auto& pattern : patterns)
        {
            int j = 0;
            for (int i = 0; i < word.length(); i++)
            {
                if (word[i] == pattern[j]) j++;
                else
                {
                    i = i - j;
                    j = 0;
                }
                if (j == pattern.length()) break;
            }
            if (j == pattern.length()) count++;
        }
        return count;
    }
};

int main() {
    assert(Solution().numOfStrings({ "a","abc","bc","d" }, "abc") == 3);
    assert(Solution().numOfStrings({ "a","b","c" }, "aaaaabbbbb") == 2);
    assert(Solution().numOfStrings({ "a","a","a" }, "ab") == 3);
    assert(Solution().numOfStrings({ "nmksysm", "gwjt", "vjwxinx", "wj", "yspxxcv", "tpeud", "sv", "sztjxnrb", "smsv", "vj", "pj", "tsmsvj", "e", "svj", "w", "vj", "awofrm", "rshgiiyi", "v" }, "ygwjtsmsvj") == 10);
    assert(Solution().numOfStrings({ "hvzoo", "r", "hyjcrgzr", "yvqahvz", "org", "yvqahvz", "org", "oor", "gxe", "zo", "ahvzoo", "ahvzo", "r", "o", "caviikty", "pkxlcaams" }, "tyvqahvzoorg") == 12);
}