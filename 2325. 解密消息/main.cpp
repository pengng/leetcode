#include <string>
#include <unordered_map>
#include <cassert>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        string decoded;
        unordered_map<char, char> dict{{' ', ' '}};
        int sequence = 0;
        for (auto& letter : key)
            if (dict.find(letter) == dict.end())
                dict[letter] = 'a' + sequence++;
        for (auto& letter : message)
            decoded += dict[letter];
        return decoded;
    }
};

int main() {
    assert(Solution().decodeMessage("the quick brown fox jumps over the lazy dog", "vkbs bs t suepuv") == "this is a secret");
    assert(Solution().decodeMessage("eljuxhpwnyrdgtqkviszcfmabo", "zwx hnfx lqantp mnoeius ycgk vcnjrdb") == "the five boxing wizards jump quickly");
}