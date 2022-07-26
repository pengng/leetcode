#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> fraction(const vector<int>& cont) {
        int n = 1;
        int m = 0;

        for (int i = cont.size() - 1; i >= 0; i--)
        {
            swap(n, m);
            n += cont[i] * m;
            if (n % m == 0)
            {
                n /= m;
                m = 1;
            }
        }

        return { n, m };
    }
};

int main() {
    Solution().fraction({ 3, 2, 0, 2 });
    Solution().fraction({ 0, 0, 3 });
}