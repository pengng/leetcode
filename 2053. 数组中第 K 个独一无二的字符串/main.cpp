#include <vector>
#include <string>
#include <unordered_map>
#include <cassert>
using namespace std;

class Solution {
public:
    string kthDistinct(const vector<string>& arr, int k) {
        unordered_map<string, int> counts;
        for (auto& item : arr) counts[item]++;
        for (auto& item : arr)
        {
            if (counts[item] == 1) k--;
            if (k == 0) return item;
        }
        return "";
    }
};

int main() {
    assert(Solution().kthDistinct({ "d","b","c","b","c","a" }, 2) == "a");
    assert(Solution().kthDistinct({ "aaa","aa","a" }, 1) == "aaa");
    assert(Solution().kthDistinct({ "a","b","a" }, 3) == "");
}