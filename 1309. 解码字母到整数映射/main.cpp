#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string freqAlphabets(string s) {
        string str;
        int x = 0;

        for (auto i = 0; i < s.length(); i++)
        {
            if (s[i] == '#')
            {
                str += (char)(x - 1 + 'a');
                x = 0;
            }
            else
            {
                x = x * 10 + (s[i] - '0');
            }

            if (x >= 100) {
                str += (char)(x / 100 - 1 + 'a');
                x %= 100;
            }
        }

        if (x > 9) {
            str += (char)(x / 10 - 1 + 'a');
            x %= 10;
        }
        if (x > 0) str += (char)(x - 1 + 'a');

        return str;
    }
};

int main() {
    cout << Solution().freqAlphabets("10#11#12") << endl;
    cout << Solution().freqAlphabets("1326#") << endl;
}