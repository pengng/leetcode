#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(const vector<int>& prices) {
        vector<int> result(prices.size());
        for (auto i = 0; i < prices.size(); i++)
        {
            auto j = i + 1;
            while (j < prices.size() && prices[j] > prices[i]) j++;
            if (j == prices.size()) result[i] = prices[i];
            else result[i] = prices[i] - prices[j];
        }
        return result;
    }
};

int main() {
    assert(Solution().finalPrices({ 8,4,6,2,3 }) == (vector<int>{4, 2, 4, 2, 3}));
    assert(Solution().finalPrices({ 1,2,3,4,5 }) == (vector<int>{1, 2, 3, 4, 5}));
    assert(Solution().finalPrices({ 10,1,1,6 }) == (vector<int>{9, 0, 1, 6}));
}