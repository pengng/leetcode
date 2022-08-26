#include<string>
#include<unordered_map>
#include<unordered_set>
#include<cassert>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> table;
        unordered_set<char> set;
        for (auto i = 0; i < s.length(); i++)
        {
            if (table.find(s[i]) == table.end() && set.find(t[i]) == set.end())
                (table[s[i]] = t[i]), set.insert(t[i]);
            else if (table[s[i]] != t[i]) return false;
        }
        return true;
    }
};

int main() {
    assert(Solution().isIsomorphic("egg", "add") == true);
    assert(Solution().isIsomorphic("foo", "bar") == false);
    assert(Solution().isIsomorphic("paper", "title") == true);
    assert(Solution().isIsomorphic("badc", "baba") == false);
}