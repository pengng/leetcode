#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
		for (auto i = 0; i < s.length(); i++)
		{
			if (s[i] == ' ') k--;
			if (k == 0) return s.substr(0, i);
		}
		return s;
    }
};

int main() {
	assert(Solution().truncateSentence("Hello how are you Contestant", 4) == "Hello how are you");
	assert(Solution().truncateSentence("What is the solution to this problem", 4) == "What is the solution");
	assert(Solution().truncateSentence("chopper is not a tanuki", 5) == "chopper is not a tanuki");
}