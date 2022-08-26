#include<string>
#include<vector>
#include<cassert>
using namespace std;

class Solution {
public:
    string largestPalindromic(string num) {
        vector<int> digits(10);
        for (auto digit : num)
            digits[digit - '0']++;
        string largest;
        for (auto i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] > 1) largest.append()
        }
        return largest;
    }
};