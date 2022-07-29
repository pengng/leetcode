#include <vector>
using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        encoded.insert(encoded.begin(), first);
        for (int i = 1; i < encoded.size(); i++)
            encoded[i] ^= encoded[i - 1];
        return encoded;
    }
};

int main() {
    vector<int> encoded1{ 1,2,3 };
    Solution().decode(encoded1, 1);

    vector<int> encoded2{ 6,2,7,3 };
    Solution().decode(encoded2, 4);
}