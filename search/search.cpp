// 704. ¶ş·Ö²éÕÒ

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int search(const vector<int>& nums, int target) {
        int lower = 0;
        int upper = nums.size() - 1;

        while (lower <= upper)
        {
            int mid = (lower + upper) / 2;
            int value = nums[mid];

            if (value < target)
            {
                lower = mid + 1;
            }
            else if (value > target)
            {
                upper = mid - 1;
            }
            else
            {
                return mid;
            }
        }

        return -1;
    }
};

int main() {
    cout << boolalpha;
    cout << (Solution().search({ -1,0,3,5,9,12 }, 9) == 4) << endl;
    cout << (Solution().search({ -1,0,3,5,9,12 }, 2) == -1) << endl;
}