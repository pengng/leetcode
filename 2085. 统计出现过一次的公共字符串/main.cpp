#include <vector>
#include <string>
#include <unordered_map>
#include <cassert>
using namespace std;

class Solution {
public:
    int countWords(const vector<string>& words1, const vector<string>& words2) {
        unordered_map<string, int> table1, table2;
        for (auto& word : words1)
            table1[word]++;
        for (auto& word : words2)
            table2[word]++;
        auto count = 0;
        for (auto& item : table1)
            if (item.second == 1 && table2[item.first] == 1)
                count++;
        return count;
    }
};

int main() {
    assert(Solution().countWords({ "leetcode","is","amazing","as","is" }, { "amazing","leetcode","is" }) == 2);
    assert(Solution().countWords({ "b","bb","bbb" }, { "a","aa","aaa" }) == 0);
    assert(Solution().countWords({ "a","ab" }, { "a","a","a","ab" }) == 1);
}