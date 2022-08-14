#include <vector>
#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(const vector<string>& operations) {
        int value = 0;
        for (auto operation : operations)
            if (operation == "X++" || operation == "++X")
                value++;
            else
                value--;

        return value;
    }
};

int main() {
    assert(Solution().finalValueAfterOperations({ "--X","X++","X++" }) == 1);
    assert(Solution().finalValueAfterOperations({ "++X","++X","X++" }) == 3);
    assert(Solution().finalValueAfterOperations({ "X++","++X","--X","X--" }) == 0);
}