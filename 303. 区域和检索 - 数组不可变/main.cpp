#include <vector>
#include <cassert>
using namespace std;

class NumArray {
    vector<int> sums;
public:
    NumArray(const vector<int>& nums) {
        sums.resize(nums.size() + 1);
        for (auto i = 0; i < nums.size(); i++)
            sums[i + 1] = sums[i] + nums[i];
    }

    int sumRange(int left, int right) {
        return sums[right + 1] - sums[left];
    }
};

int main() {
    NumArray* obj = new NumArray({ -2, 0, 3, -5, 2, -1 });
    assert(obj->sumRange(0, 2) == 1);
    assert(obj->sumRange(2, 5) == -1);
    assert(obj->sumRange(0, 5) == -3);
}