#include <vector>
#include <cstdlib>
#include <cassert>
using namespace std;

class Solution {
public:
    int countGoodRectangles(const vector<vector<int>>& rectangles) {
        int count = 0;
        int largest = 0;
        for (auto& rectangle : rectangles)
        {
            int len = min(rectangle[0], rectangle[1]);
            if (len > largest)
            {
                largest = len;
                count = 1;
            }
            else if (len == largest)
            {
                count++;
            }
        }
        return count;
    }
};

int main() {
    assert(Solution().countGoodRectangles({ {5,8},{3,9},{5,12},{16,5} }) == 3);
    assert(Solution().countGoodRectangles({ {2,3},{3,7},{4,3},{3,7} }) == 3);
}