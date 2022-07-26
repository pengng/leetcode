#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    string generateTheString(int n) {
        if (n % 2)
            return string(n, 'a');
        else
            return string(n - 1, 'a') + 'b';
    }
};

int main() {
    assert(Solution().generateTheString(4) == "aaab");
    assert(Solution().generateTheString(2) == "ab");
    assert(Solution().generateTheString(7) == "aaaaaaa");
}