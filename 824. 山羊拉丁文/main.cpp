#include <string>
#include <sstream>
#include <set>
#include <algorithm>
#include <cassert>
#include <cctype>
using namespace std;

class Solution {
    set<char> vowels{ 'a', 'e', 'i', 'o', 'u' };
public:
    string toGoatLatin(string sentence) {
        istringstream input(sentence);
        int k = 1;
        string word;
        string output;

        while (!input.eof())
        {
            input >> word;
            if (k > 1) output += " ";
            if (vowels.find(tolower(word[0])) == vowels.end()) rotate(word.begin(), word.begin() + 1, word.end());
            output += word + "ma" + string(k, 'a');
            k++;
        }

        return output;
    }
};

int main() {
    assert(Solution().toGoatLatin("I speak Goat Latin") == "Imaa peaksmaaa oatGmaaaa atinLmaaaaa");
    assert(Solution().toGoatLatin("Each word consists of lowercase and uppercase letters only") == "Eachmaa ordwmaaa onsistscmaaaa ofmaaaaa owercaselmaaaaaa andmaaaaaaa uppercasemaaaaaaaa etterslmaaaaaaaaa onlymaaaaaaaaaa");
    assert(Solution().toGoatLatin("The quick brown fox jumped over the lazy dog") == "heTmaa uickqmaaa rownbmaaaa oxfmaaaaa umpedjmaaaaaa overmaaaaaaa hetmaaaaaaaa azylmaaaaaaaaa ogdmaaaaaaaaaa");
}