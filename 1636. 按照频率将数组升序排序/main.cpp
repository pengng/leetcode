#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }

        sort(nums.begin(), nums.end(), [&map](const int a, const int b) {
            return map[a] == map[b] ? a > b : map[a] < map[b];
        });

        return nums;
    }
};

int main() {
    vector<int> arr{ 1, 1, 2, 2, 2, 3 };
    Solution().frequencySort(arr);
    arr = { 2,3,1,3,2 };
    Solution().frequencySort(arr);
    arr = { -1,1,-6,4,5,-6,1,4,1 };
    Solution().frequencySort(arr);
}