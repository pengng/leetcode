#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> pairs;
        auto smallest = arr.back() - arr.front();
        for (auto i = 0; i < arr.size() - 1; i++)
        {
            auto a = arr[i], b = arr[i + 1], diff = b - a;
            if (diff < smallest)
            {
                smallest = diff;
                pairs.clear();
            }
            if (diff <= smallest) pairs.push_back({ a, b });
        }

        return pairs;
    }
};

int main() {
    vector<int> arr1{ 4,2,1,3 };
    assert(Solution().minimumAbsDifference(arr1) == (vector<vector<int>>{ {1, 2}, { 2,3 }, { 3,4 }}));

    vector<int> arr2{ 1,3,6,10,15 };
    assert(Solution().minimumAbsDifference(arr2) == (vector<vector<int>>{ {1, 3}}));

    vector<int> arr3{ 3,8,-10,23,19,-4,-14,27 };
    assert(Solution().minimumAbsDifference(arr3) == (vector<vector<int>>{ {-14, -10}, { 19,23 }, { 23,27 }}));
}