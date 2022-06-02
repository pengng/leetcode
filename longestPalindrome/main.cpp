#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> A;
        for (int i = 0; i < s.size(); i++)
        {
            A[s[i]] += 1;
        }

        int length = 0;

        for (auto it : A)
        {
            length += it.second - it.second % 2;
        }

        for (auto it : A)
        {
            if (it.second % 2 != 0)
            {
                length += 1;
                break;
            }
        }

        return length;
    }
};

int main() {
    cout << boolalpha;
    cout << (Solution().longestPalindrome("abccccdd") == 7) << endl;
    cout << (Solution().longestPalindrome("a") == 1) << endl;
    cout << (Solution().longestPalindrome("bb") == 2) << endl;
}