#include <vector>
#include <unordered_set>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<int> intersection(const vector<int>& nums1, const vector<int>& nums2) {
        vector<int> result;
        unordered_set<int> a(nums1.begin(), nums1.end());
        unordered_set<int> b(nums2.begin(), nums2.end());
        for (auto num : a)
            if (b.find(num) != b.end())
                result.push_back(num);
        return result;
    }
};

int main() {
    assert(Solution().intersection({ 1,2,2,1 }, { 2,2 }) == (vector<int>{2}));
    assert(Solution().intersection({ 4,9,5 }, { 9,4,9,8,4 }) == (vector<int>{4, 9}));
}