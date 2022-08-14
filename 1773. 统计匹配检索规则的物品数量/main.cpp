#include <vector>
#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    int countMatches(const vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        for (auto& item : items)
            if (ruleKey == "type" && item[0] == ruleValue) count++;
            else if (ruleKey == "color" && item[1] == ruleValue) count++;
            else if (ruleKey == "name" && item[2] == ruleValue) count++;
        return count;
    }
};

int main() {
    assert(Solution().countMatches({ {"phone","blue","pixel"}, {"computer","silver","lenovo"}, {"phone","gold","iphone"} }, "color", "silver") == 1);
    assert(Solution().countMatches({ {"phone","blue","pixel"}, {"computer","silver","phone"}, {"phone","gold","iphone"} }, "type", "phone") == 2);
}