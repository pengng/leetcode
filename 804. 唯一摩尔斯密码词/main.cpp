#include <vector>
#include <string>
#include <unordered_set>
#include <cassert>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(const vector<string>& words) {
        unordered_set<string> unique;
        vector<string> dict{ ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
        for (auto& word : words)
        {
            string morse;
            for (auto& letter : word)
                morse += dict[letter - 'a'];
            unique.insert(morse);
        }
        return unique.size();
    }
};

int main() {
    assert(Solution().uniqueMorseRepresentations({ "gin", "zen", "gig", "msg" }) == 2);
    assert(Solution().uniqueMorseRepresentations({ "a" }) == 1);
}