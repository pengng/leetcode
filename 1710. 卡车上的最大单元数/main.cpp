#include<vector>
#include<algorithm>
#include<cassert>
using namespace std;

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        auto maximum = 0;
        sort(boxTypes.begin(), boxTypes.end(), [](auto a, auto b) {return a.back() > b.back(); });
        for (auto box : boxTypes)
        {
            auto count = min(box.front(), truckSize);
            maximum += count * box.back();
            truckSize -= count;
            if (truckSize <= 0) break;
        }
        return maximum;
    }
};

int main() {
    vector<vector<int>> boxTypes1{ {1,3},{2,2},{3,1} };
    assert(Solution().maximumUnits(boxTypes1, 4) == 8);

    vector<vector<int>> boxTypes2{ {5,10},{2,5},{4,7},{3,9} };
    assert(Solution().maximumUnits(boxTypes2, 10) == 91);
}