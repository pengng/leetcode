#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int largestAltitude(const vector<int>& gain) {
        int largest = 0;
        int last = 0;
        for (auto diff : gain)
        {
            last += diff;
            if (last > largest) largest = last;
        }
        return largest;
    }
};

int main() {
    assert(Solution().largestAltitude({ -5,1,5,0,-7 }) == 1);
    assert(Solution().largestAltitude({ -4,-3,-2,-1,4,3,2 }) == 0);
}