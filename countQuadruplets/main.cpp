#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int countQuadruplets(const vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size() - 3; i++)
        {
            for (int j = i + 1; j < nums.size() - 2; j++)
            {
                for (int k = j + 1; k < nums.size() - 1; k++)
                {
                    int sum = nums[i] + nums[j] + nums[k];

                    for (int l = k + 1; l < nums.size(); l++)
                    {
                        if (sum == nums[l])
                        {
                            count += 1;
                        }
                    }
                }
            }
        }
        return count;
    }
};

int main() {
    cout << boolalpha;
    cout << (Solution().countQuadruplets({ 1,2,3,6 }) == 1) << endl;
    cout << (Solution().countQuadruplets({ 3,3,6,4,5 }) == 0) << endl;
    cout << (Solution().countQuadruplets({ 1,1,1,3,5 }) == 4) << endl;
}