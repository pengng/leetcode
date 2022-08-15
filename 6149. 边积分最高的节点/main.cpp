#include <vector>
#include <unordered_map>
#include <climits>
#include <cassert>
using namespace std;

class Solution {
public:
    int edgeScore(const vector<int>& edges) {
        unordered_map<int, long long> scores;
        for (auto i = 0; i < edges.size(); i++)
            scores[edges[i]] += i;
        auto node = INT_MAX, score = INT_MIN;
        for (auto& item : scores)
            if (item.second > score)
            {
                score = item.second;
                node = item.first;
            }
            else if (item.second == score && item.first < node)
            {
                node = item.first;
            }
        return node;
    }
};

int main() {
    assert(Solution().edgeScore({ 1,0,0,0,0,7,7,5 }) == 7);
    assert(Solution().edgeScore({ 2,0,0,2 }) == 0);
}