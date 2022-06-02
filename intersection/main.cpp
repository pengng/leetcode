#include <vector>
#include <iostream>
using namespace std;

void print(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

class Solution {
public:
    vector<int> intersection(const vector<vector<int>>& nums) {
        int A[1001] = {};
        vector<int> result;

        for (auto i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums[i].size(); j++)
            {
                A[nums[i][j]] += 1;
            }
        }

        for (int i = 1; i < 1001; i++)
        {
            if (A[i] == nums.size())
            {
                result.push_back(i);
            }
        }

        return result;
    }
};

int main() {
    print(Solution().intersection({ {3,1,2,4,5} ,{1,2,3,4},{3,4,5,6} }));
    print(Solution().intersection({ {1,2,3} ,{4,5,6} }));
    print(Solution().intersection({ {1,2,3,8} }));

}