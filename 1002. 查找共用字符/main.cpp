#include <vector>
#include <string>
#include <unordered_map>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<string> commonChars(const vector<string>& words) {
        vector<unordered_map<char, int>> counts(words.size());
        for (auto i = 0; i < words.size(); i++)
            for (auto letter : words[i])
                counts[i][letter]++;
        vector<string> result;
        for (auto item : counts.front())
        {
            auto smallest = item.second;
            for (auto i = 1; i < counts.size(); i++)
                if (counts[i][item.first] < smallest)
                    smallest = counts[i][item.first];
            for (auto i = 0; i < smallest; i++)
                result.push_back(string{ item.first });
        }
        return result;
    }
};

int main() {
    assert(Solution().commonChars({ "bella", "label", "roller" }) == (vector<string>{"e", "l", "l"}));
    assert(Solution().commonChars({ "cool", "lock", "cook" }) == (vector<string>{"c", "o"}));
}