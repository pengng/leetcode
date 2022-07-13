#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(const vector<int>& arr) {
        int odds = 0;
        for (auto i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2) odds++;
            else odds = 0;

            if (odds == 3) return true;
        }

        return false;
    }
};

int main() {
    cout << boolalpha;
    cout << Solution().threeConsecutiveOdds({ 2,6,4,1 }) << endl;
    cout << Solution().threeConsecutiveOdds({ 1,2,34,3,4,5,7,23,12 }) << endl;
}