#include <string>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = 0;
        while (i < word.length() && word[i] != ch)
            i++;
        if (i == word.length()) return word;
        int j = 0;
        while (j < i)
            swap(word[j++], word[i--]);
        return word;
    }
};

int main() {
    assert(Solution().reversePrefix("abcdefd", 'd') == "dcbaefd");
    assert(Solution().reversePrefix("xyxzxe", 'z') == "zxyxxe");
    assert(Solution().reversePrefix("abcd", 'z') == "abcd");
}