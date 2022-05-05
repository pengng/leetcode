#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution2 {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        sort(nums.begin(), nums.end());

        int maximumLength = 1;
        int currentLength = 1;

        for (int i = 1; i < (int) nums.size(); i++) {
            int previous = nums[i - 1];
            int current = nums[i];
            bool isValid = previous + 1 == current;
            bool isEqual = previous == current;

            if (isEqual) {
                continue;
            } else if (isValid) {
                currentLength += 1;
            } else {
                currentLength = 1;
            }

            maximumLength = maximumLength > currentLength ? maximumLength : currentLength;
        }

        return maximumLength;
    }
};

int main() {
    vector<int> arr {1, 2, 0, 1};
    vector<int> arr2{ 100,4,200,1,3,2 };
    cout << Solution2().longestConsecutive(arr) << endl;
    cout << Solution2().longestConsecutive(arr2) << endl;
}