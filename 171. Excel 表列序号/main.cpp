#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int number = 0;

        for (auto i = 0; i < columnTitle.length(); i++)
        {
            number = number * 26 + (columnTitle[i] - 'A' + 1);
        }

        return number;
    }
};

int main() {
    cout << Solution().titleToNumber("A") << endl;
    cout << Solution().titleToNumber("AB") << endl;
    cout << Solution().titleToNumber("ZY") << endl;
}