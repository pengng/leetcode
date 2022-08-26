#include <vector>
#include <unordered_set>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(const vector<int>& arr1, const vector<int>& arr2) {
        vector<int> counts(1001);
        for (auto num : arr1) counts[num]++;

        vector<int> sorted(arr1.size());
        int i = 0, j, k;
        for (auto num : arr2)
            for (j = i, i += counts[num]; j < i; j++)
                sorted[j] = num;

        unordered_set<int> table(arr2.begin(), arr2.end());
        for (auto j = 0; j < counts.size(); j++)
        {
            if (table.find(j) != table.end()) continue;
            for (k = i, i += counts[j]; k < i; k++)
                sorted[k] = j;
        }

        return sorted;
    }
};

int main() {
    assert(Solution().relativeSortArray({ 2,3,1,3,2,4,6,7,9,2,19 }, { 2,1,4,3,9,6 }) == (vector<int>{2, 2, 2, 1, 4, 3, 3, 9, 6, 7, 19}));
    assert(Solution().relativeSortArray({ 28,6,22,8,44,17 }, { 22,28,8,6 }) == (vector<int>{22, 28, 8, 6, 17, 44}));
}