#include <string>
#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    string restoreString(string s, const vector<int>& indices) {
        string restored{ s };
        for (int i = 0; i < s.length(); i++)
            restored[indices[i]] = s[i];
        return restored;
    }
};

int main() {
    assert(Solution().restoreString("codeleet", { 4,5,6,7,0,2,1,3 }) == "leetcode");
    assert(Solution().restoreString("abc", { 0,1,2 }) == "abc");
}