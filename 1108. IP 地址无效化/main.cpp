#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for (auto& letter : address)
            if (letter == '.')
                result += "[.]";
            else
                result += letter;

        return result;
    }
};

int main() {
    assert(Solution().defangIPaddr("1.1.1.1") == "1[.]1[.]1[.]1");
    assert(Solution().defangIPaddr("255.100.50.0") == "255[.]100[.]50[.]0");
}