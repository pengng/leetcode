#include <vector>
#include <string>
#include <unordered_set>
#include <cassert>
using namespace std;

class Solution {
public:
    string destCity(const vector<vector<string>>& paths) {
        unordered_set<string> citys;
        for (auto& path : paths)
            citys.insert(path[0]);
        for (auto& path : paths)
            if (citys.find(path[1]) == citys.end())
                return path[1];
        return "";
    }
};

int main() {
    assert(Solution().destCity({ {"London","New York"},{"New York","Lima"},{"Lima","Sao Paulo"} }) == "Sao Paulo");
    assert(Solution().destCity({ {"B","C"},{"D","B"},{"C","A"} }) == "A");
}