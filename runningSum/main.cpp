#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> runningSum(const vector<int>& nums) {
        int sum = 0;
        vector<int> results;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            results.push_back(sum);
        }
        return results;
    }
};

void print(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    print(Solution().runningSum({ 1,2,3,4 }));
    print(Solution().runningSum({ 1,1,1,1,1 }));
    print(Solution().runningSum({ 3,1,2,10,1 }));
}