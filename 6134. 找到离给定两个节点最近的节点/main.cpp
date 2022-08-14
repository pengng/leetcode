#include <vector>
#include <unordered_set>
#include <cassert>
using namespace std;

class Solution {
public:
    int closestMeetingNode(const vector<int>& edges, int node1, int node2) {
        unordered_set<int> a;
        unordered_set<int> b;

        while (true)
        {
            a.insert(node1);
            b.insert(node2);
            if (a.count(node2) && b.count(node1)) return min(node1, node2);
            else if (a.count(node2)) return node2;
            else if (b.count(node1)) return node1;

            if ((edges[node1] < 0 || a.count(edges[node1])) && (edges[node2] < 0 || b.count(edges[node2]))) break;
            if (edges[node1] >= 0) node1 = edges[node1];
            if (edges[node2] >= 0) node2 = edges[node2];
        }
        return -1;
    }
};

int main() {
    assert(Solution().closestMeetingNode({ 2,2,3,-1 }, 0, 1) == 2);
    assert(Solution().closestMeetingNode({ 1,2,-1 }, 0, 2) == 2);
    assert(Solution().closestMeetingNode({ 2,0,0 }, 2, 0) == 0);
}