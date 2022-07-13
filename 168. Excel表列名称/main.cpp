#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string title;

        while (columnNumber)
        {
            title = char((columnNumber -= 1) % 26 + 'A') + title;
            columnNumber /= 26;
        } while (columnNumber);

        return title;
    }
};

int main() {
    cout << Solution().convertToTitle(1) << endl;
    cout << Solution().convertToTitle(28) << endl;
    cout << Solution().convertToTitle(701) << endl;
}