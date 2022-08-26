#include<string>
#include<cmath>
#include<cassert>
using namespace std;

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0, n = version1.length(), m = version2.length(), v1, v2;
        while (i < n || j < m)
        {
            v1 = v2 = 0;
            while (i < n && version1[i] != '.')
                v1 = v1 * 10 + (version1[i++] - '0');
            while (j < m && version2[j] != '.')
                v2 = v2 * 10 + (version2[j++] - '0');
            if (v1 < v2) return -1;
            else if (v1 > v2) return 1;
            i++, j++;
        }
        return 0;
    }
};

int main() {
    assert(Solution().compareVersion("1.01", "1.001") == 0);
    assert(Solution().compareVersion("1.0", "1.0.0") == 0);
    assert(Solution().compareVersion("0.1", "1.1") == -1);
}