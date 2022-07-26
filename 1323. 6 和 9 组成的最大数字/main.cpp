#include <cassert>
using namespace std;

class Solution {
public:
    int maximum69Number(int num) {
        if (num / 1000 == 6)
            return num + 3000;
        else if (num / 100 % 10 == 6)
            return num + 300;
        else if (num / 10 % 10 == 6)
            return num + 30;
        else if (num % 10 == 6)
            return num + 3;
        else
            return num;
    }
};

int main() {
    assert(Solution().maximum69Number(9669) == 9969);
    assert(Solution().maximum69Number(9996) == 9999);
    assert(Solution().maximum69Number(9999) == 9999);
}