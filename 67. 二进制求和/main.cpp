#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string sum;

        int i = a.length() - 1;
        int j = b.length() - 1;
        int x = 0, y = 0, z = 0;

        while (i >= 0 && j >= 0)
        {
            x = a[i] - '0';
            y = b[j] - '0';
            sum = char((x ^ y ^ z) + '0') + sum;
            z = x & y | x & z | y & z;
            i--, j--;
        }

        while (i >= 0)
        {
            x = a[i] - '0';
            sum = char((x ^ z) + '0') + sum;
            z = x & z;
            i--;
        }

        while (j >= 0)
        {
            x = b[j] - '0';
            sum = char((x ^ z) + '0') + sum;
            z = x & z;
            j--;
        }

        if (z) sum = '1' + sum;

        return sum;
    }
};

int main() {
    /*assert(Solution().addBinary("11", "1") == "100");
    assert(Solution().addBinary("1010", "1011") == "10101");
    assert(Solution().addBinary("1", "111") == "1000");*/
    assert(Solution().addBinary("110010", "10111") == "1001001");
}