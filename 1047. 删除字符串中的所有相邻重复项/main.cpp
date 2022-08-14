#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string result;
        for (auto ch : s)
            if (!result.empty() && result.back() == ch) result.pop_back();
            else result.push_back(ch);
        return result;
    }
};

int main() {
    assert(Solution().removeDuplicates("abbaca") == "ca");
}