#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int findGCD(const vector<int>& nums) {
        int smallest = *min_element(nums.begin(), nums.end());
        int largest = *max_element(nums.begin(), nums.end());
        return GCD(smallest, largest);
    }
private:
    int GCD(int a, int b) {
        return b == 0 ? a : GCD(b, a % b);
    }
};

int main() {
    assert(Solution().findGCD({ 2,5,6,9,10 }) == 2);
    assert(Solution().findGCD({ 7,5,6,8,3 }) == 1);
    assert(Solution().findGCD({ 3,3 }) == 3);
}