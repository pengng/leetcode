#include <iostream>

using namespace std;

class Solution {
public:
    bool hasAlternatingBits(int n) {
		int bit = n % 2;
		n /= 2;
		while (n)
		{
			if (n % 2 == bit) return false;
			bit = n % 2;
			n /= 2;
		}
		return true;
    }
};

int main() {
	cout << boolalpha;
	cout << Solution().hasAlternatingBits(5) << endl;
	cout << Solution().hasAlternatingBits(7) << endl;
	cout << Solution().hasAlternatingBits(11) << endl;
}