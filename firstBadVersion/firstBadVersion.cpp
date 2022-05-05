// 278. 第一个错误的版本

#include <iostream>

using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

bool isBadVersion(int version) {
    return version >= 2;
}

class Solution {
public:
    int firstBadVersion(int n) {
        int lower = 1;
        int upper = n;

        while (lower < upper)
        {
            int mid = lower + (upper - lower) / 2;
            
            if (isBadVersion(mid))
            {
                upper = mid;
            }
            else
            {
                lower = mid + 1;
            }
        }

        return lower;
    }
};

int main() {
    cout << Solution().firstBadVersion(2) << endl;
}