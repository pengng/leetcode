#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int minCostToMoveChips(const vector<int>& position) {
        int odd = 0;
        int even = 0;

        for (int i = 0; i < position.size(); i++)
        {
            even += (int)(position[i] % 2 == 0);
        }

        odd = position.size() - even;

        return min(odd, even);
    }
};

int main() {
    cout << boolalpha;
    cout << (Solution().minCostToMoveChips({ 1,2,3 }) == 1) << endl;
    cout << (Solution().minCostToMoveChips({ 2,2,2,3,3 }) == 2) << endl;
    cout << (Solution().minCostToMoveChips({ 1,1000000000 }) == 1) << endl;
}