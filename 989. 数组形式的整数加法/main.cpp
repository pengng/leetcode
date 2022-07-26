#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(const vector<int>& num, int k) {
        vector<int> sum;

        int m = 0;
        for (int i = num.size() - 1; i >= 0 || k > 0; i--)
        {
            int unit = i >= 0 ? num[i] : 0;
            int s = unit + (k % 10) + m;
            m = s / 10;
            k /= 10;
            sum.push_back(s % 10);
        }

        if (m) sum.push_back(m);

        reverse(sum.begin(), sum.end());

        return sum;
    }
};

int main() {
    Solution().addToArrayForm({ 1, 2, 0, 0 }, 34);
    Solution().addToArrayForm({ 2,7,4 }, 181);
    Solution().addToArrayForm({ 2,1,5 }, 806);
    Solution().addToArrayForm({ 0 }, 23);
}