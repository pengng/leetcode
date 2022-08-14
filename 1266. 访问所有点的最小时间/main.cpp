#include <vector>
#include <cmath>
#include <cassert>
using namespace std;

class Solution {
public:
    int minTimeToVisitAllPoints(const vector<vector<int>>& points) {
        int seconds = 0;
        for (int i = 1; i < points.size(); i++)
            seconds += max(abs(points[i][0] - points[i - 1][0]), abs(points[i][1] - points[i - 1][1]));
        return seconds;
    }
};

int main() {
    assert(Solution().minTimeToVisitAllPoints({ {1,1},{3,4},{-1,0} }) == 7);
    assert(Solution().minTimeToVisitAllPoints({ {3,2},{-2,2} }) == 5);
}