#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if (arr.size() == 0) return arr;

        vector<int> copy(arr.begin(), arr.end());
        unordered_map<int, int> positions;
        sort(copy.begin(), copy.end());

        int count = 1;
        positions[copy.front()] = count;
        for (int i = 1; i < copy.size(); i++)
            if (copy[i] != copy[i - 1])
                positions[copy[i]] = ++count;

        for (int i = 0; i < arr.size(); i++)
            arr[i] = positions[arr[i]];
        return arr;
    }
};

int main() {
    vector<int> arr1{ 40,10,20,30 };
    Solution().arrayRankTransform(arr1);

    vector<int> arr2{ 100,100,100 };
    Solution().arrayRankTransform(arr2);

    vector<int> arr3{ 37,12,28,9,100,56,80,5,12 };
    Solution().arrayRankTransform(arr3);

    vector<int> arr4;
    Solution().arrayRankTransform(arr4);
}