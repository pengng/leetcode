#include <iostream>
#include <string>
#include <map>
#include <cassert>
using namespace std;

class Solution {
    map<char, int> symbolValues{ {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };
public:
    int romanToInt(string s) {
        int number = 0;

        for (int i = 0; i < s.length(); i++)
        {
            int value = symbolValues[s[i]];
            if (i + 1 < s.length() && value < symbolValues[s[i + 1]])
                number -= value;
            else
                number += value;
        }

        return number;
    }
};

int main() {
    assert(Solution().romanToInt("III") == 3);
    assert(Solution().romanToInt("IV") == 4);
    assert(Solution().romanToInt("IX") == 9);
    assert(Solution().romanToInt("LVIII") == 58);
    assert(Solution().romanToInt("MCMXCIV") == 1994);
}