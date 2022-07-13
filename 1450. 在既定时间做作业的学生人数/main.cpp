#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int busyStudent(const vector<int>& startTime, const vector<int>& endTime, int queryTime) {
        int count = 0;

        for (auto i = 0; i < startTime.size(); i++)
        {
            if (startTime[i] <= queryTime && endTime[i] >= queryTime) count++;
        }

        return count;
    }
};

int main() {
    cout << Solution().busyStudent({ 1,2,3 }, { 3,2,7 }, 4) << endl;
    cout << Solution().busyStudent({ 4 }, { 4 }, 4) << endl;
    cout << Solution().busyStudent({ 4 }, { 4 }, 5) << endl;
    cout << Solution().busyStudent({ 1,1,1,1 }, { 1,3,2,4 }, 7) << endl;
    cout << Solution().busyStudent({ 9,8,7,6,5,4,3,2,1 }, { 10,10,10,10,10,10,10,10,10 }, 5) << endl;
}