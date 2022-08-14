#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int maximum = 0;
        sort(grades.begin(), grades.end());
        int last = 0;
        int lastCount = 0;
        int count = 0;
        int sum = 0;
        for (int i = 0; i < grades.size(); i++)
        {
            sum += grades[i];
            count++;
            if (sum > last && count > lastCount) {
                last = sum;
                lastCount = count;
                sum = 0;
                count = 0;
                maximum++;
            }
        }
        return maximum;
    }
};

int main() {
    vector<int> nums{ 10,6,12,7,3,5 };
    assert(Solution().maximumGroups(nums) == 3);

    vector<int> nums2{ 8,8 };
    assert(Solution().maximumGroups(nums2) == 1);
}