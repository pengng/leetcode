#include <string>
#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    string sortString(string s) {
        string result;
        vector<int> counts(26);

        for (auto letter : s) counts[letter - 'a']++;
        while (result.length() != s.length())
        {
            for (int i = 0; i < counts.size(); i++)
                if (counts[i]-- > 0)
                    result += i + 'a';
            for (int i = counts.size() - 1; i >= 0; i--)
                if (counts[i]-- > 0)
                    result += i + 'a';
        }

        return result;
    }
};

int main() {
    assert(Solution().sortString("aaaabbbbcccc") == "abccbaabccba");
    assert(Solution().sortString("rat") == "art");
    assert(Solution().sortString("leetcode") == "cdelotee");
    assert(Solution().sortString("ggggggg") == "ggggggg");
    assert(Solution().sortString("spo") == "ops");
}