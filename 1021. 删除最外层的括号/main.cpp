#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int level = 0;
        for (auto& letter : s)
            if (letter == '(')
            {
                level++;
                if (level > 1) result += letter;
            }
            else
            {
                level--;
                if (level > 0) result += letter;
            }
        return result;
    }
};

int main() {
    assert(Solution().removeOuterParentheses("(()())(())") == "()()()");
    assert(Solution().removeOuterParentheses("(()())(())(()(()))") == "()()()()(())");
    assert(Solution().removeOuterParentheses("()()") == "");
}