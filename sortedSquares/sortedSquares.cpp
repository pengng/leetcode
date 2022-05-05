// 977. 有序数组的平方

#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(const vector<int>& nums) {
        vector<int> arr(nums.size());
        int head = 0;
        int tail = nums.size() - 1;
        int i = tail;

        while (i >= 0)
        {
            if (abs(nums[head]) > abs(nums[tail]))
            {
                arr[i] = pow(nums[head], 2);
                head += 1;
            }
            else
            {
                arr[i] = pow(nums[tail], 2);
                tail -= 1;
            }
            i -= 1;
        }

        return arr;
    }
};

int main() {
    cout << boolalpha;
    vector<int> arr1{ 0,1,9,16,100 };
    vector<int> arr2{ 4,9,9,49,121 };
    cout << (Solution().sortedSquares({ -4,-1,0,3,10 }) == arr1) << endl;
    cout << (Solution().sortedSquares({ -7,-3,2,3,11 }) == arr2) << endl;
}