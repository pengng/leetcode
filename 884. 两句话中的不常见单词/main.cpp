#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> odds;
        unordered_map<string, int> counts;
        istringstream input(s1 + " " + s2);
        string word;
        while (input >> word)
            counts[word]++;

        for (const auto &item : counts)
            if (item.second == 1)
                odds.push_back(item.first);

        return odds;
    }
};

int main() {
    Solution().uncommonFromSentences("this apple is sweet", "this apple is sour");
    Solution().uncommonFromSentences("apple apple", "banana");
}