#include <vector>
#include <map>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(const vector<vector<int>>& items1, const vector<vector<int>>& items2) {
        map<int, int> items;
        for (auto& item : items1)
            items[item[0]] += item[1];
        for (auto& item : items2)
            items[item[0]] += item[1];
        vector<vector<int>> results;
        for (auto& item : items)
            results.push_back({ item.first, item.second });
        return results;
    }
};

int main() {
    assert(Solution().mergeSimilarItems({ {1,1},{4,5},{3,8} }, { {3,1},{1,5} }) == (vector<vector<int>>{ {1, 6}, { 3,9 }, { 4,5 }}));
    assert(Solution().mergeSimilarItems({ {1,1},{3,2},{2,3} }, { {2,1},{3,2},{1,3} } ) == (vector<vector<int>>{ {1, 4}, { 2,4 }, { 3,4 }}));
    assert(Solution().mergeSimilarItems({ {1,3},{2,2} }, { {7,1},{2,2},{1,4} }) == (vector<vector<int>>{ {1, 7}, { 2,4 }, { 7,1 }}));
}