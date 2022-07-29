#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(const vector<int>& arr) {
        vector<int> counts(2001);
        for (auto num : arr) counts[num + 1000]++;
        vector<bool> times(1001);
        for (auto count : counts)
            if (count > 0 && times[count]) return false;
            else times[count] = true;

        return true;
    }
};

int main() {
    assert(Solution().uniqueOccurrences({ 1,2,2,1,1,3 }) == true);
    assert(Solution().uniqueOccurrences({ 1,2 }) == false);
    assert(Solution().uniqueOccurrences({ -3,0,1,-3,1,1,1,-3,10,0 }) == true);
}