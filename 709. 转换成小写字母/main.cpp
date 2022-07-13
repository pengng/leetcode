#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
		for (auto i = 0; i < s.length(); i++)
		{
			if (isupper(s[i])) s[i] = tolower(s[i]);
		}

		return s;
    }
};

int main() {
	cout << Solution().toLowerCase("Hello WorLd") << endl;
	cout << Solution().toLowerCase("Hello") << endl;
	cout << Solution().toLowerCase("here") << endl;
	cout << Solution().toLowerCase("LOVELY") << endl;
}