#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int mostWordsFound(const vector<string>& sentences) {
        int maximum = 0;
        for (auto sentence : sentences)
        {
            int spaces = 0;
            for (auto letter : sentence)
                if (letter == ' ') spaces++;
            maximum = max(maximum, spaces + 1);
        }

        return maximum;
    }
};

int main() {
    assert(Solution().mostWordsFound({ "alice and bob love leetcode", "i think so too", "this is great thanks very much" }) == 6);
    assert(Solution().mostWordsFound({ "please wait", "continue to fight", "continue to win" }) == 3);
}