#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
		for (auto i = 1; i < word.length(); i++)
		{
			if (isupper(word[i]) && islower(word[i - 1])) return false;
			if (islower(word[i]) && isupper(word[i - 1]) && i - 1 > 0) return false;
		}

		return true;
    }
};

int main() {
	cout << boolalpha;
	cout << Solution().detectCapitalUse("USA") << endl;
	cout << Solution().detectCapitalUse("FlaG") << endl;

}