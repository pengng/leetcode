#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> bits(1e4 + 1);
        for (auto num : arr)
            bits[num] = countBits(num);
        sort(arr.begin(), arr.end(), [bits](int a, int b) { return bits[a] == bits[b] ? a < b : bits[a] < bits[b]; });
        return arr;
    }
private:
    int countBits(int num) {
        auto bits = 0;
        while (num)
        {
            bits++;
            num &= num - 1;
        }
        return bits;
    }
};

int main() {
    vector<int> arr1{ 0,1,2,3,4,5,6,7,8 };
    assert(Solution().sortByBits(arr1) == (vector<int>{0, 1, 2, 4, 8, 3, 5, 6, 7}));

    vector<int> arr2{ 1024,512,256,128,64,32,16,8,4,2,1 };
    assert(Solution().sortByBits(arr2) == (vector<int>{1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024}));

    vector<int> arr3{ 10000,10000 };
    assert(Solution().sortByBits(arr3) == (vector<int>{10000, 10000}));

    vector<int> arr4{ 2,3,5,7,11,13,17,19 };
    assert(Solution().sortByBits(arr4) == (vector<int>{2, 3, 5, 17, 7, 11, 13, 19}));

    vector<int> arr5{ 10,100,1000,10000 };
    assert(Solution().sortByBits(arr5) == (vector<int>{10, 100, 10000, 1000}));
}