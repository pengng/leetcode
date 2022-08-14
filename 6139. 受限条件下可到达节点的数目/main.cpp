#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <cassert>
using namespace std;

class Solution {
public:
    int reachableNodes(int n, const vector<vector<int>>& edges, const vector<int>& restricted) {
        unordered_set<int> unreached{ restricted.begin(), restricted.end() };
        unordered_map<int, vector<int>> table;
        for (auto& edge : edges)
        {
            table[edge[0]].push_back(edge[1]);
            table[edge[1]].push_back(edge[0]);
        }
        unordered_set<int> reached;
        queue<int> nodes{ { 0 } };
        while (nodes.size())
        {
            auto node = nodes.front();
            nodes.pop();
            reached.insert(node);
            for (auto node : table[node])
                if (reached.find(node) == reached.end() && unreached.find(node) == unreached.end())
                    nodes.push(node);
        }
        return reached.size();
    }
};

int main() {
    assert(Solution().reachableNodes(7, { {0,1},{1,2},{3,1},{4,0},{0,5},{5,6} }, { 4,5 }) == 4);
    assert(Solution().reachableNodes(7, { {0,1},{0,2},{0,5},{0,4},{3,2},{6,5} }, { 4,2,1 }) == 3);
}