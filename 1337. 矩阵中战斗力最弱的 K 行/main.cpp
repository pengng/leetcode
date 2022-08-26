#include<vector>
#include<numeric>
#include<algorithm>
#include<cassert>
using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(const vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> rows;
        for (auto i = 0; i < mat.size(); i++)
            rows.push_back({ i, accumulate(mat[i].begin(), mat[i].end(), 0) });
        sort(rows.begin(), rows.end(), [](auto a, auto b) {return a.second == b.second ? a.first < b.first : a.second < b.second; });
        vector<int> weakest;
        for (auto i = 0; i < k; i++)
            weakest.push_back(rows[i].first);
        return weakest;
    }
};

int main() {
    assert(Solution().kWeakestRows({ {1,1,0,0,0},{1,1,1,1,0},{1,0,0,0,0},{1,1,0,0,0},{1,1,1,1,1} }, 3) == (vector<int>{2, 0, 3}));
    assert(Solution().kWeakestRows({ {1,0,0,0},{1,1,1,1},{1,0,0,0},{1,0,0,0} }, 2) == (vector<int>{0, 2}));
}