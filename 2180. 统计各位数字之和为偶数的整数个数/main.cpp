#include <cassert>
using namespace std;

class Solution {
public:
    int countEven(int num) {
        int count = 0;
        while (num)
        {
            int i = num;
            int sum = 0;
            while (i)
            {
                sum += i % 10;
                i /= 10;
            }
            if (sum % 2 == 0) count++;
            num--;
        }

        return count;
    }
};

int main() {
    assert(Solution().countEven(4) == 2);
    assert(Solution().countEven(30) == 14);
}