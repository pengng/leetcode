#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(const vector<int>& candies, int extraCandies) {
        vector<bool> results(candies.size());
        auto largest = *max_element(candies.begin(), candies.end()) - extraCandies;
        for (int i = 0; i < candies.size(); i++)
            if (candies[i] >= largest) results[i] = true;
        return results;
    }
};

int main() {
    Solution().kidsWithCandies({ 2,3,5,1,3 }, 3);
    Solution().kidsWithCandies({ 4,2,1,1,2 }, 1);
    Solution().kidsWithCandies({ 12,1,12 }, 10);
}