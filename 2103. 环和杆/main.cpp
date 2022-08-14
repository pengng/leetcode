#include <string>
#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int countPoints(string rings) {
        int count = 0;
        vector<int> poles(10);
        for (int i = 0; i < rings.length(); i += 2)
        {
            int j = rings[i + 1] - '0';
            if (rings[i] == 'R') poles[j] |= 0b001;
            else if (rings[i] == 'G') poles[j] |= 0b010;
            else poles[j] |= 0b100;
        }
        for (auto& pole : poles)
            if (pole == 0b111)
                count++;
        return count;
    }
};

int main() {
    assert(Solution().countPoints("B0B6G0R6R0R6G9") == 1);
    assert(Solution().countPoints("B0R0G0R9R0B0G0") == 1);
    assert(Solution().countPoints("G4") == 0);
}