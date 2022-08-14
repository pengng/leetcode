#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    int removePalindromeSub(string s) {
		for (int i = 0; i < s.length() / 2; i++)
			if (s[i] != s[s.length() - 1 - i]) return 2;
		return 1;
    }
};

int main() {
	assert(Solution().removePalindromeSub("ababa") == 1);
	assert(Solution().removePalindromeSub("abb") == 2);
	assert(Solution().removePalindromeSub("baabb") == 2);
}