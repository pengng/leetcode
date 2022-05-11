// 1491. 去掉最低工资和最高工资后的工资平均值

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    double average(vector<int> salary) {
        int maximum = INT_MIN;
        int minimum = INT_MAX;
        int total = 0;

        for (auto item : salary) {
            total += item;
            maximum = max(maximum, item);
            minimum = min(minimum, item);
        }

        return (total - maximum - minimum) / (salary.size() - 2.0);
    }
};

int main() {
    cout << boolalpha << (Solution().average({ 4000, 3000, 1000, 2000 }) == 2500) << endl;
    cout << boolalpha << (Solution().average({ 1000,2000,3000 }) == 2000) << endl;
    cout << boolalpha << (Solution().average({ 6000,5000,4000,3000,2000,1000 }) == 3500) << endl;
    cout << boolalpha << (Solution().average({ 8000,9000,2000,3000,6000,1000 }) == 4750) << endl;
}
