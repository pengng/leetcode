// 189. ÂÖ×ªÊı×é

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

int main() {
    cout << boolalpha;

    {
        vector<int> arr{ 1,2,3,4,5,6,7 };
        vector<int> arr2{ 5,6,7,1,2,3,4 };
        Solution().rotate(arr, 3);

        cout << (arr == arr2) << endl;
    }

    {
        vector<int> arr{ -1,-100,3,99 };
        vector<int> arr2{ 3,99,-1,-100 };
        Solution().rotate(arr, 2);

        cout << (arr == arr2) << endl;
    }
}