#include<string>
#include<cassert>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        auto i = 0;
        for (auto letter : t)
            if (i >= s.length()) break;
            else if (letter == s[i]) i++;
        return i == s.length();
    }
};

int main() {
    assert(Solution().isSubsequence("abc", "ahbgdc") == true);
    assert(Solution().isSubsequence("axc", "ahbgdc") == false);
}