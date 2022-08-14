#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int vowels = 0, n = s.length(), k = n / 2;
        string table{ "aeiouAEIOU" };
        for (int i = 0; i < k; i++)
            if (table.find(s[i]) != table.npos) vowels++;
        for (int i = k; i < n; i++)
            if (table.find(s[i]) != table.npos) vowels--;
        return vowels == 0;
    }
};

int main() {
    assert(Solution().halvesAreAlike("book") == true);
    assert(Solution().halvesAreAlike("textbook") == false);
    assert(Solution().halvesAreAlike("tkPAdxpMfJiltOerItiv") == false);
}