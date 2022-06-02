#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string replaceDigits(string s) {
		for (int i = 1; i < s.size(); i += 2)
		{
			s[i] = s[i - 1] + (s[i] - '0');
		}
		return s;
    }
};

int main() {
	cout << boolalpha;
	cout << (Solution().replaceDigits("a1c1e1") == "abcdef") << endl;
	cout << (Solution().replaceDigits("a1b2c3d4e") == "abbdcfdhe") << endl;
}