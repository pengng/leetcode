#include <vector>
#include <cstdlib>
#include <cassert>
using namespace std;

class Solution {
public:
    int countGoodTriplets(const vector<int>& arr, int a, int b, int c) {
        int count = 0;
        for (int i = 0; i < arr.size() - 2; i++)
            for (int j = i + 1; j < arr.size() - 1; j++)
                for (int k = j + 1; k < arr.size(); k++)
                    if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                        count++;
        return count;
    }
};

int main() {
    assert(Solution().countGoodTriplets({ 3,0,1,1,9,7 }, 7, 2, 3) == 4);
    assert(Solution().countGoodTriplets({ 1,1,2,2,3 }, 0, 0, 1) == 0);
}