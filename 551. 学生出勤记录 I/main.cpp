#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
		int lates = 0;
		int absents = 0;

		for (auto i = 0; i < s.length(); i++)
		{
			if (s[i] == 'L') lates++;
			else lates = 0;

			if (s[i] == 'A') absents++;

			if (lates >= 3 || absents >= 2) return false;
		}

		return true;
    }
};

int main() {
	cout << boolalpha;
	cout << Solution().checkRecord("PPALLP") << endl;
	cout << Solution().checkRecord("PPALLL") << endl;
	cout << Solution().checkRecord("PPALLA") << endl;
}