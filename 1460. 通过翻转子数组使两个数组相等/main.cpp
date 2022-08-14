#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        return target == arr;
    }
};

int main() {
    vector<int> target1{ 1,2,3,4 }, arr1{ 2,4,1,3 };
    assert(Solution().canBeEqual(target1, arr1) == true);

    vector<int> target2{ 7 }, arr2{ 7 };
    assert(Solution().canBeEqual(target2, arr2) == true);

    vector<int> target3{ 3,7,9 }, arr3{ 3,7,11 };
    assert(Solution().canBeEqual(target3, arr3) == false);
}