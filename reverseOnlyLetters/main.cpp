#include <string>
#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right)
        {
            while (!isalpha(s[left]) && left < right) left++;
            while (!isalpha(s[right]) && right > left) right--;
            swap(s[left++], s[right--]);
        }

        return s;
    }
};

int main() {
    cout << boolalpha;
    cout << (Solution().reverseOnlyLetters("ab-cd") == "dc-ba") << endl;
    cout << (Solution().reverseOnlyLetters("a-bC-dEf-ghIj") == "j-Ih-gfE-dCba") << endl;
    cout << (Solution().reverseOnlyLetters("Test1ng-Leet=code-Q!") == "Qedo1ct-eeLg=ntse-T!") << endl;

}