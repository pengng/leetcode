#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cassert>
using namespace std;

class Solution {
public:
    int longestCycle(const vector<int>& edges) {
        int longest = -1;
        unordered_set<int> visited;
        for (int i = 0; i < edges.size(); i++)
        {
            int node = i;
            while (node >= 0 && visited.count(node) == 0)
            {
                visited.insert(node);
                node = edges[node];
            }
            if (node >= 0) {
                int len = 0;
                int bak = node;
                while (true)
                {
                    node = edges[node];
                    if (node < 0) break;
                    len++;
                    if (node == bak) break;
                }
                if (len > 0 && len > longest) longest = len;
            }
        }

        return longest;
    }
};

int main() {
    assert(Solution().longestCycle({ 3,3,4,2,3 }) == 3);
    assert(Solution().longestCycle({ 2,-1,3,1 }) == -1);
}