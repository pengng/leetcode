#include <string>
#include <stack>
#include <cassert>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> bracket;

        if (s.length() % 2) return false;

        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == '(' || ch == '[' || ch == '{') bracket.push(ch);
            else if (bracket.empty()) return false;
            else if (ch == ')' && bracket.top() != '(' || ch == ']' && bracket.top() != '[' || ch == '}' && bracket.top() != '{') return false;
            else bracket.pop();
        }

        return bracket.empty();
    }
};

int main() {
    assert(Solution().isValid("()"));
    assert(Solution().isValid("()[]{}"));
    assert(Solution().isValid("(]") == false);
    assert(Solution().isValid("([)]") == false);
    assert(Solution().isValid("{[]}"));
    assert(Solution().isValid("]") == false);
}