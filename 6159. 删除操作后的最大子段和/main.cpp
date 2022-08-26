#include<vector>
#include<algorithm>
#include<cassert>
using namespace std;

//class Solution {
//public:
//    vector<long long> maximumSegmentSum(vector<int>& nums, const vector<int>& removeQueries) {
//        vector<long long> result;
//        for (auto i = 0; i < removeQueries.size(); i++)
//        {
//            nums[removeQueries[i]] = 0;
//            auto sum = 0LL, largest = 0LL;
//            for (auto j = 0; j < nums.size(); j++)
//            {
//                if (nums[j] > 0) sum += nums[j];
//                else
//                {
//                    if (sum > largest) largest = sum;
//                    sum = 0;
//                }
//            }
//            if (sum > largest) largest = sum;
//            result.push_back(largest);
//        }
//        return result;
//    }
//};

class Solution {
public:
    vector<long long> maximumSegmentSum(vector<int>& nums, const vector<int>& removeQueries) {
        vector<long long> result;
        vector<long long> sums(nums.size() + 1);
        for (auto i = 1; i < sums.size(); i++)
            sums[i] += sums[i - 1] + nums[i - 1];

        for (auto i = 0; i < removeQueries.size(); i++)
        {
            for (auto j = removeQueries[i]; j < sums.size(); j++)
                sums[j] -= nums[removeQueries[i]];
            result.push_back(*max_element(sums.begin(), sums.end()));
        }
        return result;
    }
};

int main() {
    vector<int> nums1{ 1,2,5,6,1 };
    assert(Solution().maximumSegmentSum(nums1, { 0,3,2,4,1 }) == (vector<long long>{14, 7, 2, 2, 0}));
    
    vector<int> nums2{ 3,2,11,1 };
    assert(Solution().maximumSegmentSum(nums2, { 3,2,1,0 }) == (vector<long long>{16, 5, 3, 0}));
}