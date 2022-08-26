#include<string>
#include<cassert>
using namespace std;

class Solution {
public:
    int dayOfYear(string date) {
        int months[]{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        auto days = 0;
        auto year = stoi(date.substr(0, 4)), month = stoi(date.substr(5, 2)), day = stoi(date.substr(8, 2));
        for (auto i = 0; i < month - 1; i++)
            days += months[i];
        days += day;
        if (month > 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)) days += 1;
        return days;
    }
};

int main() {
    assert(Solution().dayOfYear("2019-01-09") == 9);
    assert(Solution().dayOfYear("2019-02-10") == 41);
}