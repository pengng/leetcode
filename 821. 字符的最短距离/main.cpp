#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> result;
        vector<int> table;
        for (auto i = 0; i < s.length(); i++)
            if (s[i] == c) table.push_back(i);
        for (auto i = 0; i < s.length(); i++)
        {
            int smallest = s.length();
            for (auto index : table)
                smallest = min(abs(i - index), smallest);
            result.push_back(smallest);
        }
        return result;
    }
};

int main() {
    assert(Solution().shortestToChar("loveleetcode", 'e') == (vector<int>{3, 2, 1, 0, 1, 0, 0, 1, 2, 2, 1, 0}));
    assert(Solution().shortestToChar("aaab", 'b') == (vector<int>{3, 2, 1, 0}));
}