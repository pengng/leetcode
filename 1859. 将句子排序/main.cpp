#include <string>
#include <sstream>
#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        istringstream sentence(s);
        vector<string> words(9);
        string word;
        int i;
        int n = 0;
        while (sentence >> word)
        {
            n++;
            i = word[word.length() - 1] - '1';
            word.resize(word.length() - 1);
            words[i] = word;
        }
        string sorted;
        for (int i = 1; i < n; i++)
        {
            if (i > 0) sorted += ' ';
            sorted += words[i];
        }
        return sorted;
    }
};

int main() {
    assert(Solution().sortSentence("is2 sentence4 This1 a3") == "This is a sentence");
    assert(Solution().sortSentence("Myself2 Me1 I4 and3") == "Me Myself and I");
}