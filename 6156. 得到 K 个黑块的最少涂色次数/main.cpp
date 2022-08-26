#include<string>
#include<cassert>
using namespace std;

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        auto white = 0;
        for (auto i = 0; i < k; i++)
            if (blocks[i] == 'W') white++;
        auto smallest = white;
        for (auto i = k; i < blocks.size(); i++)
        {
            if (blocks[i] == 'W') white++;
            if (blocks[i - k] == 'W') white--;
            if (white < smallest) smallest = white;
        }
        return smallest;
    }
};

int main() {
    assert(Solution().minimumRecolors("WBBWWBBWBW", 7) == 3);
    assert(Solution().minimumRecolors("WBWBBBW", 2) == 0);
}