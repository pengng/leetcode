#include <vector>
#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    string firstPalindrome(const vector<string>& words) {
        for (auto& word : words)
        {
            int head = 0, tail = word.length() - 1;
            while (head < tail && word[head] == word[tail])
                head++, tail--;
            if (head >= tail) return word;
        }
        return "";
    }
};

int main() {
    assert(Solution().firstPalindrome({ "abc","car","ada","racecar","cool" }) == "ada");
    assert(Solution().firstPalindrome({ "notapalindrome","racecar" }) == "racecar");
    assert(Solution().firstPalindrome({ "def","ghi" }) == "");
}