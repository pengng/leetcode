#include <string>
#include <cctype>
#include <sstream>
#include <set>
#include <cassert>
using namespace std;

class Solution {
public:
    int numDifferentIntegers(string word) {
        for (int i = 0; i < word.length(); i++)
            if (!isdigit(word[i]))
                word[i] = ' ';

        istringstream input(word);
        set<string> nums;
        string num;
        while (input >> num)
        {
            int i = 0;
            while (num[i] == '0') i++;
            nums.insert(num.substr(i));
        }

        return nums.size();
    }
};

int main() {
    assert(Solution().numDifferentIntegers("a123bc34d8ef34") == 3);
    assert(Solution().numDifferentIntegers("leet1234code234") == 2);
    assert(Solution().numDifferentIntegers("a1b01c001") == 1);
    assert(Solution().numDifferentIntegers("u") == 0);
    assert(Solution().numDifferentIntegers("167278959591294") == 1);
}