#include<vector>
#include<string>
#include<cassert>
using namespace std;

class Solution {
public:
    string shiftingLetters(string s, const vector<vector<int>>& shifts) {
        vector<int> increase(s.length() + 1);
        for (auto shift : shifts)
        {
            auto step = shift[2] ? 1 : -1;
            increase[shift[0]] += step;
            increase[shift[1] + 1] += (step == 1 ? -1 : 1);
        }

        auto step = 0;
        for (auto i = 0; i < s.length(); i++)
        {
            step += increase[i];
            s[i] = ((s[i] - 'a' + step % 26) + 26) % 26 + 'a';
        }

        return s;
    }
};

int main() {
    assert(Solution().shiftingLetters("abc", { {0,1,0},{1,2,1},{0,2,1} }) == "ace");
    assert(Solution().shiftingLetters("dztz", { {0,0,0},{1,1,1} }) == "catz");
}