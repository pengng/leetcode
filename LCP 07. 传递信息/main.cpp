#include <vector>
#include <functional>
#include <cassert>
using namespace std;

class Solution {
public:
    int numWays(int n, const vector<vector<int>>& relation, int k) {
        int count = 0;
        vector<vector<int>> edges(n);
        for (auto& item : relation)
            edges[item[0]].push_back(item[1]);

        function<void(int, int)> dfs = [&](int node, int k) {
            if (k == 0) {
                if (node == n - 1) count++;
                return;
            }
            for (auto target : edges[node])
                dfs(target, k - 1);
        };

        dfs(0, k);
        return count;
    }
};

int main() {
    assert(Solution().numWays(5, { {0,2},{2,1},{3,4},{2,3},{1,4},{2,0},{0,4} }, 3) == 3);
    assert(Solution().numWays(3, { {0,2},{2,1} }, 2) == 0);
}