#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int findCenter(const vector<vector<int>>& edges) {
        if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]) return edges[0][0];
        else return edges[0][1];
    }
};

int main() {
    assert(Solution().findCenter({ {1,2},{2,3},{4,2} }) == 2);
    assert(Solution().findCenter({ {1,2},{5,1},{1,3},{1,4} }) == 1);
}