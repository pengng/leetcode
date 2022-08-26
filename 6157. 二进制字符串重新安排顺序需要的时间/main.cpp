#include<string>
#include<algorithm>
#include<cassert>
using namespace std;

class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        auto seconds = 0;
        while (true)
        {
            auto flag = false;
            for (auto i = 0; i < s.length() - 1; i++)
            {
                if (s[i] == '0' && s[i + 1] == '1')
                {
                    flag = true;
                    swap(s[i], s[i + 1]);
                    i++;
                }
            }
            if (!flag) break;
            seconds++;
        }

        return seconds;
    }
};

int main() {
    assert(Solution().secondsToRemoveOccurrences("0110101") == 4);
    assert(Solution().secondsToRemoveOccurrences("11100") == 0);
    assert(Solution().secondsToRemoveOccurrences("001011") == 4);
    /*010101
    101010
        110100*/
}