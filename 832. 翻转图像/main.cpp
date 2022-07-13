#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        auto n = image.size();
        for (auto i = 0; i < n; i++)
        {
            for (auto j = 0; j < n / 2; j++)
            {
                swap(image[i][j], image[i][n - j - 1]);
            }
            for (auto j = 0; j < n; j++)
                image[i][j] ^= 1;
        }
        return image;
    }
};

int main() {
    vector<vector<int>> data{ {1,1,0}, {1,0,1}, {0,0,0} };
    Solution().flipAndInvertImage(data);
    data = { {1,1,0,0}, {1,0,0,1}, {0,1,1,1}, {1,0,1,0} };
    Solution().flipAndInvertImage(data);
}